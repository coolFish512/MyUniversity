#!/usr/bin/env python
#  -*-coding:utf8 -*-

import RPi.GPIO as GPIO
import time
from socket import *
import threading
import RPi.GPIO as GPIO
from ending import ending
import os
import sys

markobo_btn = 36
is_pushed = False
soul = ending()

def malerobo_setup():
    GPIO.setmode(GPIO.BOARD)
    GPIO.setwarnings(False)
    GPIO.setup(markobo_btn,
               GPIO.IN,
               pull_up_down=GPIO.PUD_UP)
    GPIO.add_event_detect(markobo_btn,GPIO.BOTH,
               callback = makerobo_detect,
               bouncetime=200)

def makerobo_pushed(x):
    global is_pushed
    global soul
    if x == 0:
        print('按下按钮！')
        if not is_pushed:
            print('开始网络链接工作')
            is_pushed = True
            soul.start()
        else:
            print('开始终止程序')
            markerobo_destory()
            soul.stop()
            sys.exit(0)


def makerobo_detect(chn):
    makerobo_pushed(GPIO.input(markobo_btn))

def loop():
    while True:
        pass

def markerobo_destory():
    GPIO.cleanup()

# 开始进行联网的检测
def check_internet_connect():
    try:
        create_connection(('www.baidu.com',443))
        return True
    except OSError:
        return False


class auto_start(threading.Thread):

    def __init__(self) -> None:
        threading.Thread.__init__(self)
        makerobo_pin_R = 11
        GPIO.setmode(GPIO.BOARD)
        GPIO.setwarnings(False)
        GPIO.setup(makerobo_pin_R,GPIO.OUT)
        GPIO.output(makerobo_pin_R,GPIO.LOW)
        self.p_R = GPIO.PWM(makerobo_pin_R,7000) 
        makerobo_pin_G = 12
        GPIO.setup(makerobo_pin_G,GPIO.OUT)
        GPIO.output(makerobo_pin_G,GPIO.LOW)
        self.p_G = GPIO.PWM(makerobo_pin_G,400)
        self.is_started = False
    
    def __check_internet_connect(self):
        try:
            create_connection(('www.baidu.com',443))
            return True
        except OSError:
            return False
        
    def run(self):
        self.p_R.start(1)
        times_counter = 0
        is_connect = False
        while times_counter<240:  # 等两分钟
            if self.__check_internet_connect():
                self.p_R.stop()
                is_connect = True
                break
            time.sleep(0.5)
            times_counter += 1 
        if not is_connect:
            f = open('errors_rept',"w")
            f.write("没有成功链接网络")
            f.close()
        else:
            self.p_R.stop()
            self.p_G.start(1)
            self.is_started = True
            return
    
    def red_ligjt_start(self):
        self.p_R.start(1)
    
    def close_light(self):
        self.p_G.stop()
        GPIO.cleanup()


if __name__ == '__main__':
    a = auto_start()
    a.start()
    malerobo_setup()
    try:
        while True:
            pass
    except KeyboardInterrupt:
        pass