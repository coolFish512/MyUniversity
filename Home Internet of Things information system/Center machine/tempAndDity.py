'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-15 13:25:23
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:25:31
FilePath: /pi_code/tempAndDity.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import Adafruit_DHT
import time

class tempAndDity:
    def __init__(self) -> None:
        self.markerobo_pin = 4
        self.sensor = Adafruit_DHT.DHT11

    def get_data(self) -> str:
        humidity,temperature = Adafruit_DHT.read_retry(self.sensor,self.markerobo_pin)
        if humidity is not None and temperature is not None:
            return '->'+'室内温度:'+str(temperature)+'\n'+'->'+'室内湿度:'+str(humidity)
        else:
            return '室内温度和湿度读取失效 :('
    

if __name__ == '__main__':
    t = tempAndDity()
    while True:
        print(t.get_data())
        time.sleep(3)