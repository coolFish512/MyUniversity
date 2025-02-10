'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-15 13:26:29
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:26:34
FilePath: /pi_code/zigbee.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import serial
import time
import os
import threading

class zigbeeData(threading.Thread):
    def __init__(self):
        threading.Thread.__init__(self)
        os.system('sudo chmod 777 /dev/ttyAMA0')
        self.ser = serial.Serial('/dev/ttyAMA0',115200)
        self.cmdBuffer = ''
        self.shouldRun = True

    def send(self,data:str):
        self.ser.write(data.encode())

    def get(self):
        number = self.ser.in_waiting
        data = ''
        if number != 0:
            data = self.ser.read(number)
        return data
    
    def run(self):
        try:
            while self.shouldRun:
                time.sleep(0.5)
                data = self.get()
                if data != '':
                    self.cmdBuffer = data
                    #print(data)
                    self.ser.flush()
        except KeyboardInterrupt:
            self.ser.close()
            print('接收出现错误')
            return 
        
    def kill(self):
        self.ser.close()
        self.shouldRun = False

    def readCmdBuffer(self):
        if self.cmdBuffer != '':
            cmd = self.cmdBuffer
            self.cmdBuffer = ''
            return cmd
        else:
            return ''
    
    

    
        
    
