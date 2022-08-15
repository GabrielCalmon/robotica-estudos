import cv2 
import numpy as np 
import matplotlib.pyplot as plt

path='opencv/images/brazilian-toucan-bird-2-1179294.jpg'
img = cv2.imread(path)
img = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
cv2.imshow('jkfdbjksf', img)
cv2.waitKey(0)
cv2.destroyAllWindows()