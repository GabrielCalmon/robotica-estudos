import cv2 as cv
import numpy as np
import matplotlib.pyplot as pltb

image = cv.imread("opencv/images/PythonProjectStructure.jpg", 1)
image = cv.resize(image, (800, 400))

cv.imshow('my_tab',image)
cv.waitKey(0)
cv.destroyAllWindows()