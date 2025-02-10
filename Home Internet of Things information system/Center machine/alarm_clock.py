'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-04 20:57:17
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:22:47
FilePath: /python_work/物联网课设/alarm_clock.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import threading
from relay import relay
from sock import sock
import datetime
import time
from touch_check import touch_check

class alarm_clock(threading.Thread):
    def __init__(self,sock:sock):  # 只不过是为了调试才去掉的，后来一定要加上
        threading.Thread.__init__(self)
        self.alarm_list = []
        with open('/home/pi/Documents/python_work/物联网课设/alarm_clock.py','r') as f:
            alarms = f.read()
        self.alarm_list = alarms.split('\n')
        self.is_alarmed =[]
        self.relay = relay()
        self.sock = sock
        self.touch = touch_check()

    def add_alarms(self,hour:int,min:int):
        new_alarm = ''
        if len(str(hour)) == 1 :
            new_alarm += '0' + str(hour)
        else:
            new_alarm += str(hour)
        new_alarm += ' '
        if len(str(min)) == 1:
            new_alarm += '0' + str(min)
        else:
            new_alarm += str(min)
        if new_alarm in self.alarm_list:
            return 
        self.alarm_list.append(new_alarm)
        with open('alarms.txt','w') as f:
            f.write('')
        with open('alarms.txt','a') as f:
            for i in self.alarm_list:
                f.write(i+'\n')

    def delete_alarms(self,which:int):
        self.alarm_list.remove(self.alarm_list[which-1])
        with open('alarms.txt','w') as f:
            f.write('')
        with open('alarms.txt','a') as f:
            for i in self.alarm_list:
                f.write(i+'\n')

    
    def send_alarm_list(self):
        alarm_list_str = ''
        with open('alarms.txt','r') as f:
            alarm_list_str = f.read()
        print('todo'+'|'+'show_alarm_list'+'|'+self.sock.oOcreater.to_oO(alarm_list_str))
        self.sock.send('todo'+'|'+'show_alarm_list'+'|'+self.sock.oOcreater.to_oO(alarm_list_str))  # 加密发送
    
        
    def run(self):
        while True:
            if len(self.alarm_list) == 0:
                time.sleep(1)
                pass
            else:
                now_time = str(datetime.datetime.now())
                now_time = now_time.split(' ')[1]
                now_time_h,now_time_m = now_time.split(':')[0:2]
                #now_time_m = now_time_m.split('.')[0]
                now_time = now_time_h+' '+now_time_m
                if now_time == '00 00':
                    self.is_alarmed = [] # 0点清空闹钟历史
                # 如果将闹钟就定在了00:00的话，那只能听一个小时的闹钟了
                if (now_time in self.alarm_list) and (not(now_time in self.is_alarmed)):
                    counter = 0
                    while counter < 10:
                        if self.touch.check():
                            counter = 0
                            break
                        self.relay.short_time_up(0.1)
                        time.sleep(5)
                        counter += 1
                    self.is_alarmed.append(now_time)
                    
