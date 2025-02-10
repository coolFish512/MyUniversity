'''
Author: codingFish 3251009898@qq.com
Date: 2023-09-30 17:34:17
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-04 20:29:29
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/passwork_sock.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import socket
import threading
import sys
import time

class password_sock(threading.Thread):
    def __init__(self,host,port=8901):
        threading.Thread.__init__(self)
        self.host = host
        self.port = port
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            self.sock.connect((self.host,self.port))
        except:
            self.sock.close()
            print('口令sock链接没有成功')
            sys.exit()
        print('口令sock链接成功')
        self.is_object = False

    def run(self):
        # 下面开始对接口令
        # 发送口令+接受口令
        for i in range(50):
            time.sleep(0.05)
            try:
                self.sock.send(str('NEUQ').encode('utf8'))
                if self.sock.recv(1024).decode()[0:3] == 'ILY':
                    print('口令正确')
                    self.is_object = True
            except:pass
            
        
    def join(self) -> (bool,str) :
        threading.Thread.join(self)
        self.sock.close()
        return (self.is_object,self.host)

    def stop(self):
        self.sock.close()


    def ip_identify(self) -> (bool,str) :
        obj_ip = ''
        self.start()
        print('start ipfinder')
        ans = self.join()
        if ans[0]:
            obj_ip = ans[1]
    
        if obj_ip:
            return (True,obj_ip)
        else:
            return (False,'')
