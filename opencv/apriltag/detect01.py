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
    ret, img = vid.read()
 
    imgGray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    options = apriltag.DetectorOptions(families="tag36h11")
    options.tag_size = 15
    options.camera_params = (765.00, 764.18, 393.72, 304.66)
    detector = apriltag.Detector(options)
    
    results = detector.detect(imgGray)

    #print(f'[INFO] {len(results)} total AprilTags detected')
    for r in results:
        pose, e0, e1 = detector.detection_pose(r,
                                                  options.camera_params,
                                                  options.tag_size)
        #print(f'{pose}')
        xrot=pose[:3, 0]
        yrot=pose[:3, 1]
        zrot=pose[:3, 2]
        dist_transf=pose[:3, 3]
        dist = pow(dist_transf[0]**2 + dist_transf[1]**2 + dist_transf[2]**2 ,0.5)  # calcula o modulo da distancia 
        #print(f'{dist} cm')
        print(f'{pose}')
        (topLeft, topRight, bottomRight, bottomLeft) = r.corners
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


        
    cv.imshow("teste", img)
    if cv.waitKey(1) & 0xFF == ord('q'):
            stop = True

vid.release()
cv.destroyAllWindows()