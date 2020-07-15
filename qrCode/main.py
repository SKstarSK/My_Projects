import pyqrcode
text = 'OH SHIT! I AM SORRY'
qr = pyqrcode.create(text)
qr.png('abc.png', scale=8)

from pyzbar.pyzbar import decode
from PIL import Image

d = decode(Image.open('abc.png'))

print(d[0].data)
print("Done")