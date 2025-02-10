'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-09-28 20:44:16
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:24:44
FilePath: /Documents/python_work/物联网课设/ending.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from collections.abc import Callable, Iterable, Mapping
import socket
from sock import *
import time
from tempAndDity import tempAndDity
import threading
from hanzi_encryption import hanzi_encryption
import toDo
from distance import distance
from alarm_clock import alarm_clock
from weatherAPI import weatherAPI
import sys
from mods import mods

class ending(threading.Thread):
    def __init__(self) -> None:
        threading.Thread.__init__(self)
        self.stoped = False

    def run(self):
        self_ip = sock.get_self_ip()
        # 开启用于接受扫描的端口
        scannered_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        scannered_sock.bind((self_ip,6679))
        scannered_sock.listen(2)

        # 开启专门用于接受口令的端口
        password_sock = sock(self_ip,8901)
        password_sock.start()
        times_counter = 0 # 等待口令30秒
        is_got_passsword = False
        while times_counter<30:
            print(password_sock.gotted_data[0:4])
            if password_sock.gotted_data[0:4] == 'NEUQ':
                # 返回一个口令，表示接受到了！
                print('got_it')
                password_sock.send('ILY')
                is_got_passsword = True
                password_sock.stop()
                password_sock.close()
                break
            time.sleep(1)
        scannered_sock.close()
        if not is_got_passsword:
            f = open('errors_rept','w')
            f.write('没有收到口令')
            f.close()
            exit()
        s = sock(sock.get_self_ip(),10124) # 创建了sock对象，开始等待链接
        s.start()
        if s.notice_key(): print('密钥发送成功')

        # 创建温湿度传感器对象：
        temp_and_dity = tempAndDity()
        # 创建距离传感器
        dis = distance(s)
        dis.start()
        # 创建闹钟
        alarm = alarm_clock(s)
        alarm.start()
        # 创建用于进行API请求的类
        weather_API = weatherAPI()
        # 创建mods
        Mods = mods(s)
        Mods.start()

        while not self.stoped :

            data = s.read_data()
            if data : print(data[0:4])
            if data[0:4] == 'todo':
                data_split = data.split('|')
                print(data_split)
                if data_split[1] == 'wd':
                    print(data)
                    toDo.send_diary_content(s,data_split[2],data_split[3],toWrite=True)
                elif data_split[1] == 'rd':
                    print(data)
                    toDo.send_diary_content(s,data_split[2],data_split[3],toWrite=False)
                elif data_split[1] == 'give_en_infor':
                    en_infor = ''
                    en_infor += '--------------\n'
                    en_infor += '【室外环境】\n'
                    en_infor += weather_API.getWeather() + '\n'
                    en_infor +=  '【室内环境】\n'
                    en_infor += '温度：23 湿度：33'
                    en_infor += '\n【对话时输入‘change location’修改所在地】\n'
                    en_infor += '--------------'
                    toDo.give_en_infor(s,en_infor)
                elif data_split[1] == 'exit':
                    print(data)
                    self.stop()
                    break
                elif data_split[1] == 'save_diary':
                    print(data)
                    toDo.save_diary(data_split[2],data_split[3],data_split[4],data_split[5])
                elif data_split[1] == 'begin_protection':
                    print(data)
                    toDo.begin_protection(dis,s)
                elif data_split[1] == 'stop_protection':
                    print(data)
                    toDo.stop_protection(dis,s)
                elif data_split[1] == 'send alarm':
                    print(data)
                    toDo.send_alarm(alarm)
                elif data_split[1] == 'add_alarm':
                    print(data)
                    toDo.add_alarm(alarm,data_split[2],data_split[3])
                elif data_split[1] == 'delete_alarms':
                    print(data)
                    toDo.delete_alarms(alarm,data_split[2])
                elif data_split[1] == 'set alarm':
                    print(data)
                    toDo.set_alarm(alarm,data_split[2])
                elif data_split[1] == 'change location':
                    print(data)
                    weather_API.changeCity(data_split[2])
                elif data_split[1] == 'into':
                    print(data)
                    Mods.intoMod(data_split[2]) # 之后程序会在这里阻塞，知道模块使用结束
            elif data == 'exit':
                break
            elif data == '':
                pass
            else:
                print('  --没有这个指令'+data)
            time.sleep(2)
    
    
    def stop(self):
        self.stoped = True
        sys.exit()


                    



if __name__ == '__main__':
    e = ending()
    e.start()


'''
self_ip = sock.get_self_ip()
# 开启用于接受扫描的端口
scannered_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
scannered_sock.bind((self_ip,9000))
scannered_sock.listen(2)



# 开启专门用于接受口令的端口
password_sock = sock(self_ip,6666)
password_sock.start()
times_counter = 0 # 等待口令30秒
is_got_passsword = False
while times_counter<30:
    print(password_sock.gotted_data[0:4])
    if password_sock.gotted_data[0:4] == 'NEUQ':
        # 返回一个口令，表示接受到了！
        print('got_it')
        password_sock.send('ILY')
        is_got_passsword = True
        password_sock.stop()
        password_sock.close()
        break
    time.sleep(1)
scannered_sock.close()
if not is_got_passsword:
    f = open('errors_rept','w')
    f.write('没有收到口令')
    f.close()
    exit()


s = sock(sock.get_self_ip(),10006) # 创建了sock对象，开始等待链接
s.start()
if s.notice_key(): print('密钥发送成功')

# 创建温度传感器对象：
temp = temperature()

while True:
    data = 'temperatrue\n'+ str(temp.get())
    print(data)
    s.send_oO(data)
    if s.gotted_data == 'exit':
        break
    time.sleep(2)
'''