import cv2
import numpy as np

img = cv2.imread('opencv/images/blue-cell-case.jpg')
imgHSV = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

h_min = 0
h_max = 255
s_min = 0
s_max = 255
v_min = 0
v_max = 255

lower = np.array([h_min,s_min,v_min])
upper = np.array([h_max,s_max,v_max])

# Criação de máscara com base nos limites estabelecidos
mask = cv2.inRange(imgHSV,lower,upper)
#cv2_imshow(mask)

# imgBlur = cv2.GaussianBlur(img,(17,17),100000000000)
# cv2_imshow(imgBlur)

#Recorte da região delimitada pela máscara
#imgResult = cv2.bitwise_and(img,img,mask=mask)
#cv2.imshow('tab view', imgResult)
cv2.imshow('tab view', mask)
cv2.waitKey(0)
cv2.destroyAllWindows()