'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-09-28 20:33:54
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:25:16
FilePath: /python_work/物联网课设/sock.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import socket
import threading
import time
from oOcreater import *
from hanzi_encryption import hanzi_encryption
class sock(threading.Thread):
    def __init__(self, host, port):
        threading.Thread.__init__(self)
        self.host = host
        self.port = port
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.bind((host, port))
        self.sock.listen(2)
        self.connect = self.sock.accept()[0]
        self.gotted_data = ''
        self.__is_running = True
        self.oOcreater = oO(with_the_key=False)
        self.hanzi_encryption = hanzi_encryption()

    
    def notice_key(self) -> bool:
        try:
            key = self.oOcreater.got_key()
            self.send(key)
            return True
        except:
            print('密钥无法发送')
            return False
    
    def read_data(self) -> str:
        data = self.gotted_data
        self.gotted_data = ''
        return data

    def send_oO(self,data:str) -> bool:
        try:
            data_oO = self.oOcreater.to_oO(data)
            self.send(data_oO)
            return True       
        except:
            return False
    
    def read_oO_data(self) -> str:
        try:
            data = self.oOcreater.to_str(self.gotted_data)
            self.gotted_data = ''
            return data
        except:
            return ''

    def stop(self):
        self.__is_running = False
    
    def close(self):
        self.sock.close()
        self.connect.close()

    def send(self,data:str) -> bool:
        try:
            self.connect.send(data.encode())
            return True
        except:
            return False
    
    def run(self):
        while True:
            time.sleep(0.5)
            try:
                self.gotted_data = self.connect.recv(1024).decode()
                #print(self.gotted_data)
            except:
                print("Error decoding")
                break
            if not self.__is_running:
                return 
    
    @staticmethod
    def get_self_ip():
        self_ip = '' 
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        try:
            s.connect(('8.8.8.8', 80))
        except:
            print("设备没有接入局域网")
            s.close()
            exit()
        self_ip = s.getsockname()[0]
        return self_ip