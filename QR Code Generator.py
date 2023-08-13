#QR Code generator 
#Made using Python

import qrcode
from PIL import Image

qr = qrcode.QRCode(version=1,error_correction=qrcode.constants.ERROR_CORRECT_H,
                   box_size=10,border=4)

qr.add_data("")#put link of your desired website in here
qr.make(fit=True)

img = qr.make_image(fill_color = "green",back_color="blue")
img.save("")#save your file with desired filename with .png extension
