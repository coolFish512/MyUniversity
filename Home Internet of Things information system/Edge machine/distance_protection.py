'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-04 14:14:15
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 00:30:20
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/distance_protection.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AEg
'''
import threading
from sock import Sock
import time


class dis_prot(threading.Thread):
    def __init__(self,sock:Sock):
        threading.Thread.__init__(self)
        self.sock = sock
        self.is_working = False
        self.warning_is_showed = False
        self.counter = 10

    def begin(self):
        self.is_working = True

    def show_waring(self):
        self.warning_is_showed = True
        print('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')
        print('！发现入侵！！发现入侵！！发现入侵！！发现入侵！')
        print('------------点击回车继续对话--------------')
        print('---------提示静默5秒钟,请尽快处理---------')
        print('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')
    
    def show_mod_warning(self,name:str):
        self.warning_is_showed = True
        print('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')
        print((name+'发现入侵')*3)
        print('!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!')

    def run(self):
        while True:
            if self.is_working:
                data = self.sock.read_data()
                
                if data == '':
                    self.counter = 10
                    time.sleep(0.5)
                    pass
                else:
                    if self.counter <10:
                        self.counter+=1
                        time.sleep(0.5)
                        continue
                    data_split = data.split('|')
                    if data_split[0] == 'protection_worning':
                        # 展示窗口，记录数据
                        self.show_waring()
                        with open('warning_report.txt', 'a') as warning:
                            warning.write(data_split[1]+'\n')
                        self.counter = 0
                        time.sleep(0.5) 
                    elif data_split[0] == 'mod warning':
                        # 展示窗口
                        self.show_mod_warning(data_split[1])
                        with open('warning_report.txt', 'a') as warning:
                            warning.write(data_split[2]+' ---- '+data_split[1]+'\n')

            else:
                time.sleep(0.5)
                pass

    
    def stop(self):
        self.is_working = False
            