# import the opencv library
import cv2
import numpy as np

# uma função de callback vazia
def nothing(x):
    pass

def start_trackers():
    # create trackbars for color change
    cv2.createTrackbar('HMin','image',0,179,nothing) # Hue is from 0-179 for Opencv
    cv2.createTrackbar('SMin','image',0,255,nothing)
    cv2.createTrackbar('VMin','image',0,255,nothing)
    cv2.createTrackbar('HMax','image',0,179,nothing)
    cv2.createTrackbar('SMax','image',0,255,nothing)
    cv2.createTrackbar('VMax','image',0,255,nothing)

    # Set default value for MAX HSV trackbars.
    cv2.setTrackbarPos('HMax', 'image', 179)
    cv2.setTrackbarPos('SMax', 'image', 255)
    cv2.setTrackbarPos('VMax', 'image', 255)

def get_trackers():
    pass
  
# define a video capture object
vid = cv2.VideoCapture(0)
  
while(True):
    # Capture the video frame by frame
    ret, frame = vid.read()
    imgHSV = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    # Range mínimo e máximo da cor amarela (HSV)
    h_min = 104
    h_max = 110
    s_min = 150
    s_max = 199
    v_min = 127
    v_max = 184

    lower = np.array([h_min,s_min,v_min])
    upper = np.array([h_max,s_max,v_max])

    # Criação de máscara com base nos limites estabelecidos
    mask = cv2.inRange(imgHSV,lower,upper)
    #cv2_imshow(mask)

    #Recorte da região delimitada pela máscara
    imgResult = cv2.bitwise_and(frame,frame,mask=mask)
    # Display the resulting frame
    cv2.imshow('frame', imgResult)
    


    # the 'q' button is set as the
    # quitting button you may use any
    # desired button of your choice
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break
  
# After the loop release the cap object
vid.release()
# Destroy all the windows
cv2.destroyAllWindows()