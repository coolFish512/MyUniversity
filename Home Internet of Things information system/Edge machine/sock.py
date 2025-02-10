'''
Author: codingFish 3251009898@qq.com
Date: 2023-09-28 20:38:29
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-02 19:14:56
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/sock.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import socket
import threading
import time
from oOreader import oOreader
from hanzi_encryption import hanzi_encryption

class Sock(threading.Thread):
    def __init__(self,host,port):
        threading.Thread.__init__(self)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.host = host
        self.port = port
        self.sock.connect((host, port))
        # 调试用：
        #self.sock.send(str('hello world').encode('utf-8'))
        self.gotted_data = ''
        self.__is_running  = True
        self.oOreader = None
        # 之后开始接收密钥
        self.key_str = self.sock.recv(1024).decode('utf-8')
        self.enviroment_infor = ''
        self.hanzi_encryption = hanzi_encryption()

    def read_data(self):
        data = self.gotted_data
        self.gotted_data = ''
        return data

    def init_oOreader(self) -> bool:
        key = ''
        for i in range(5):
            if self.key_str:
                key = self.key_str
                break
            time.sleep(0.25)
        if not key:
            print('没有收到密钥')
            return False
        '''创建解码器，如果创建成功就返回true'''
        
        try:
            self.oOreader = oOreader(key,with_the_key=False)
            return True
        except:
            print('oOerror')
            return False
        


    def stop(self):
        self.__is_running = False

    def close(self):
        self.sock.close()

    def send(self,data:str) -> bool:
        try:
            self.sock.send(data.encode())
            return True
        except:
            return False
        

    def send_oO(self,data:str) -> bool:
        '''发送加密的信息'''
        try:
            oO_data = self.oOreader.to_oO(data)
            if self.send(oO_data):
                return True
            else:
                return False
        except:
            return False
        
        

    
    def run(self):
        while True:
            time.sleep(0.5)
            try:
                self.gotted_data = self.sock.recv(1024).decode()
            except:
                print("error recv")
                break
            if not self.__is_running:
                return 
            
    
    def reader_oO_data(self) -> str:
        data = self.oOreader.to_str(self.gotted_data)
        self.gotted_data = ''
        return data
