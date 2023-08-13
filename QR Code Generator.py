#QR Code generator 
#Made using Python

import qrcode as qr
img = qr.make("") #put the link of your desired website in here, starting with https
img.save("")#save the file with any desired filename with .png extension
