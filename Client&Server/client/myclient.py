import socket
import os
import time
from tkinter import filedialog as fd



class Client:
    def __init__(self, server, port):
        self.server = server
        self.port = port
    
    def Start_Client(self):
        client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        client.connect((self.server, self.port))
        return client

    def Send_text(self, text, client):
        client.sendall(bytes(text,'UTF-8'))

    def Send_picture(self, picture, client):
        client.sendall(bytes(picture))

SERVER = "localhost"
PORT = 9094

client1 = Client(SERVER, PORT)
clientt = client1.Start_Client()
client1.Send_text("Hello!",clientt)

while True:
    in_data = clientt.recv(1024)
    print("From Server :" ,in_data.decode())
    out_data = input("Введите 1, 2, picture или bye: ")
    client1.Send_text(out_data,clientt)
    if out_data == 'picture':
        file_name = fd.askopenfilename()
        f = open(file_name,'rb')
        out_data = os.path.getsize(file_name)
        print(os.path.basename(file_name))
        client1.Send_text(str(out_data),clientt)
        time.sleep(2)
        client1.Send_text(str(os.path.basename(file_name)),clientt)
        while out_data:
            out_data = f.read(1024)
            client1.Send_picture(out_data,clientt)
        f.close()
    elif out_data=='bye':
        clientt.close()
        break
    elif out_data == '2':
            in_data = clientt.recv(1024)
            print("From Server :" ,in_data.decode())
            while clientt.recv(1024):
                in_data = clientt.recv(1024)
                print("From Server :" ,in_data.decode())
    else:
        print()
