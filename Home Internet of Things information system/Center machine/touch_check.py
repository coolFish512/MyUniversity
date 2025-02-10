'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-04 23:41:22
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:26:06
FilePath: /python_work/物联网课设/touch_check.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import RPi.GPIO as GPIO
import time

class touch_check:
    def __init__(self) -> None:
        self.makerobo_touch = 13
        GPIO.setmode(GPIO.BOARD)
        GPIO.setwarnings(False)
        GPIO.setup(self.makerobo_touch,GPIO.IN,pull_up_down=GPIO.PUD_UP)

    def check(self) -> bool:
        if GPIO.input(self.makerobo_touch) == 1:
            return True
        else:
            return False


if __name__ == '__main__':
    t = touch_check()
    counter = 0
    while counter < 5:
        print('check:')
        print(t.check())
        time.sleep(1)
        counter += 1