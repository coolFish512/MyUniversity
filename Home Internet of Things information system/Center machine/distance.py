'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-04 10:52:44
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:26:51
FilePath: /python_work/物联网课设/distance.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from collections.abc import Callable, Iterable, Mapping
import threading
import RPi.GPIO as GPIO
import time
from sock import sock
import datetime

class distance(threading.Thread):
    def __init__(self,sock:sock):
        threading.Thread.__init__(self)
        self.makerobo_TRIG = 38
        self.makerobo_ECHO = 18
        self.sock = sock
        GPIO.setmode(GPIO.BOARD)
        GPIO.setwarnings(False)
        GPIO.setup(self.makerobo_TRIG,GPIO.OUT)
        GPIO.setup(self.makerobo_ECHO,GPIO.IN)
        self.is_stoped = True


    def check_distance(self):
        GPIO.output(self.makerobo_TRIG,0)
        time.sleep(0.000002)

        GPIO.output(self.makerobo_TRIG,1)
        time.sleep(0.00001)
        GPIO.output(self.makerobo_TRIG,0)

        while GPIO.input(self.makerobo_ECHO) == 0:
            us_a = 0
        us_time1 = time.time()
        while GPIO.input(self.makerobo_ECHO) == 1:
            us_a = 1
        us_time2 = time.time()
        us_during = us_time2 - us_time1

        return us_during * 340 / 2 * 100
    
    def stop(self):
        self.is_stoped = True

    def begin(self):
        self.is_stoped = False

    def warning(self):
        now_time = str(datetime.datetime.now())
        self.sock.send('protection_worning'+'|'+now_time+'|')
        print('warning!')


    def run(self):
        while True:
            if not self.is_stoped  :
                dis = self.check_distance()
                if dis <=10 : self.warning()
            else:
                pass
            time.sleep(0.5)
    
    def kill(sefl):
        GPIO.cleanup()
        

if __name__ == '__main__':
    d = distance()
    d.start()
    d.begin()
    time.sleep(5)
    d.stop()