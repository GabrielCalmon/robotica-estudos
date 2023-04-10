import apriltag
import argparse
import cv2 as cv

# recebe a imagem
vid = cv.VideoCapture(0)
stop = False

while(not stop):
    ret, img = vid.read()
 
    imgGray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

    options = apriltag.DetectorOptions(families="tag36h11")
    detector = apriltag.Detector(options)
    results = detector.detect(imgGray)

    #print(f'[INFO] {len(results)} total AprilTags detected')
    for r in results:
        (ptA, ptB, ptC, ptD) = r.corners
        ptA = (int(ptA[0]), int(ptA[1]))
        ptB = (int(ptB[0]), int(ptB[1]))
        ptC = (int(ptC[0]), int(ptC[1]))
        ptD = (int(ptD[0]), int(ptD[1]))

        cv.line(img, ptA, ptB, (0, 255, 0), 2)
        cv.line(img, ptB, ptC, (0, 255, 0), 2)
        cv.line(img, ptC, ptD, (0, 255, 0), 2)
        cv.line(img, ptD, ptA, (0, 255, 0), 2)

        (cX, cY) = (int(r.center[0]), int(r.center[1]))
        cv.circle(img, (cX, cY), 5, (0,0,255), -1)
        
    cv.imshow("teste", img)
    if cv.waitKey(1) & 0xFF == ord('q'):
            stop = True

vid.release()
cv.destroyAllWindows()