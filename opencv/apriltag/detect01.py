import apriltag
import argparse
import cv2 as cv
import numpy as np

# configs para mostrar valores do numpy com apenas 2 casas decimais
float_formatter = "{:.2f}".format
float_formatter(1.234567E3)
np.set_printoptions(formatter={'float_kind':float_formatter})

# recebe a imagem
vid = cv.VideoCapture(0)
stop = False

while(not stop):
    ret, img = vid.read()   #captura video
 
    imgGray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)   # converte para preto e branco

    options = apriltag.DetectorOptions(families="tag36h11")
    options.tag_size = 15
    options.camera_params = (765.00, 764.18, 393.72, 304.66)    # valores arbitrarios, ja que nao foi feita a calibracao
    detector = apriltag.Detector(options)
    
    results = detector.detect(imgGray)

    # para cada objeto detectado:
    for r in results:
        pose, e0, e1 = detector.detection_pose(r,
                                                  options.camera_params,
                                                  options.tag_size)
        #pose -> matriz de transformacao 4x4, e0 -> erro inicial, e1 -> erro final
        xrot=pose[:3, 0]
        yrot=pose[:3, 1]
        zrot=pose[:3, 2]
        dist_transf=pose[:3, 3]
        dist = pow(dist_transf[0]**2 + dist_transf[1]**2 + dist_transf[2]**2 ,0.5)  # calcula o modulo da distancia 
        print(f'{dist:.2f} cm') # e uma estimativa
        #print(f'{pose}')
        (topLeft, topRight, bottomRight, bottomLeft) = r.corners    # separa os vertices do retangulo de deteccao em diferentes variaveis
        # remove a componente z
        topLeft = (int(topLeft[0]), int(topLeft[1]))
        topRight = (int(topRight[0]), int(topRight[1]))
        bottomRight = (int(bottomRight[0]), int(bottomRight[1]))
        bottomLeft = (int(bottomLeft[0]), int(bottomLeft[1]))

        # desenha um retangulo ao redor da tag
        cv.line(img, topLeft, topRight, (0, 255, 0), 2)
        cv.line(img, topRight, bottomRight, (0, 255, 0), 2)
        cv.line(img, bottomRight, bottomLeft, (0, 255, 0), 2)
        cv.line(img, bottomLeft, topLeft, (0, 255, 0), 2)

        # desenha ponto no centro da tag
        (cX, cY) = (int(r.center[0]), int(r.center[1]))
        cv.circle(img, (cX, cY), 5, (0,0,255), -1)

        #desenha eixos xyz
        xrot2d = (int(xrot[0]*100), int(xrot[1]*100))
        yrot2d = (int(yrot[0]*100), int(yrot[1]*100))
        zrot2d = (int(zrot[0]*100), int(zrot[1]*100))
        cv.line(img, (cX, cY), (cX+xrot2d[0], cY+xrot2d[1]), (0, 0, 255), 4)
        cv.line(img, (cX, cY), (cX+yrot2d[0], cY+yrot2d[1]), (0, 255, 0), 4)
        cv.line(img, (cX, cY), (cX+zrot2d[0], cY+zrot2d[1]), (255, 0, 0), 4)
        # print(f'fixo: ({cX}, {cY})')
        # print(f'movel: ({xrot2d})')
    
    imgShow=cv.flip(img, 1) # espelha a imagem, apenas para fins de apresentacao
    cv.imshow("tag Detector", imgShow)
    if cv.waitKey(1) & 0xFF == ord('q'):
        stop = True

vid.release()
cv.destroyAllWindows()

# materiais de apoio: 
# -> https://docs.opencv.org/3.4/d7/d53/tutorial_py_pose.html