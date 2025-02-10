'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-04 21:00:05
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:25:03
FilePath: /python_work/物联网课设/relay.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import RPi.GPIO as GPIO
import time

class relay:
    def __init__(self):
        self.makerobo_RelayPin = 32
        GPIO.setmode(GPIO.BOARD)
        GPIO.setup(self.makerobo_RelayPin,GPIO.OUT) # 设定为输出模式
        GPIO.output(self.makerobo_RelayPin,GPIO.LOW)
        self.is_turn_up = False

    def long_time_up(self,second:int):
        if second > 5 or second <= 0 : second = 5
        self.__turn_up()
        time.sleep(second)
        self.__turn_down()

    def short_time_up(self,second:float):
        if second >=1 : second = 0.9
        self.__turn_up()
        time.sleep(second)
        self.__turn_down()

    def __turn_up(self):
        if self.is_turn_up:
            return 
        GPIO.output(self.makerobo_RelayPin,GPIO.HIGH)
        self.is_turn_up = True

    def __turn_down(self):
        if not self.is_turn_up:
            return 
        GPIO.output(self.makerobo_RelayPin,GPIO.LOW)
        self.is_turn_up = False
    
if __name__ == '__main__':
    r = relay()
    r.short_time_up(0.1)