h_min = 0
h_max = 20
s_min = 100
s_max = 255
v_min = 100
v_max = 255

lower = np.array([h_min,s_min,v_min])
upper = np.array([h_max,s_max,v_max])

# Criação de máscara com base nos limites estabelecidos
mask = cv2.inRange(imgHSV,lower,upper)
#cv2_imshow(mask)

# imgBlur = cv2.GaussianBlur(img,(17,17),100000000000)
# cv2_imshow(imgBlur)

#Recorte da região delimitada pela máscara
imgResult = cv2.bitwise_and(img,img,mask=mask)
cv2_imshow(imgResult)