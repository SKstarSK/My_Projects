import socket
import os
from tkinter import filedialog as fd

class ServerTest:

    def __init__(self, ip, port):
        self.ip = ip
        self.port = port

    def start(self, ip, port):
        server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server.bind((ip, port))
        server.listen(1)
        print("Server started")
        return server
        
    def serverConnect(self, server):
        print("Waiting for client request..")
        clientConnection,clientAddress = server.accept()
        print("Connected clinet :" , clientAddress)
        return clientConnection


    def takeFile(self, clientConnection):
        size = clientConnection.recv(1024).decode()
        size = int(size)
        file_name = clientConnection.recv(1024).decode()
        print(file_name)
        f = open(str(file_name),'wb')
        while size > 0:
            msg = clientConnection.recv(1024)
            f.write(msg)
            size -= 1024
        f.close()
        out_data = 'Pictured sent!'

    def work(self, clientConnection, directory):
        msg = ''
        while clientConnection:
            in_data = clientConnection.recv(1024)
            msg = in_data.decode()
            if msg=='2':
                myList = os.listdir(directory)
                for i in myList:
                    #out_data = myList[i]
                    clientConnection.send(bytes(i + ' ','UTF-8'))
                clientConnection.send(bytes('0','UTF-8'))
                #out_data = 'Do something!'
            elif msg == 'picture':
                server.takeFile(clientConnection)
            elif msg=='bye':
                #break
                print("Client disconnected.... Bye Bye!")
                clientConnection.close()
                clientConnection = server.serverConnect(dataClient)
            else:
                out_data = 'Hi!'
            if msg != 'bye':
                print("From Client :" , msg)
                clientConnection.send(bytes(out_data,'UTF-8'))
        print("Client disconnected.... Bye Bye!")
        clientConnection.close()

directory = 'C:\\Users\\acer\\Desktop\\cas\\server'

server = ServerTest("",9094)
dataClient = server.start("",9094)
#clientConnection = server.serverConnect(dataClient)
server.work(server.serverConnect(dataClient), directory)
