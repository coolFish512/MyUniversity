'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-02 18:37:54
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:25:54
FilePath: /python_work/物联网课设/toDo.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AEso
'''
from sock import sock
import os
import Diarys
from distance import distance
from alarm_clock import alarm_clock

def get_todo_str(*words):
    todo_str = ''
    for i in range(0,len(words)):
        if i : todo_str += '|'
        todo_str += words[i]
    return todo_str


def send_diary_content(sock:sock,path:str,key_path:str,toWrite:bool) :
    path = path
    key_path = key_path
    print(path+'\n'+key_path)
    if os.path.exists(path) and os.path.exists(key_path):
        diary_content,key = Diarys.get_contentAndKey(path,key_path)
        # 解密的工作交给主机吧
        if toWrite:
            sock.send('todo'+'|'+'showdiary'+'|'+diary_content+'|'+key+'|'+path+'|'+key_path) 
        else:
            sock.send(get_todo_str('todo','showdiaryToRead',diary_content,key,path,key_path))
    else:
        if toWrite:
            sock.send('todo'+'|'+'showdiary'+'|'+' '+'|'+' '+'|'+path+'|'+key_path) 
        else:
            sock.send(get_todo_str('todo','showdiaryToRead',' ',' ',path,key_path))

        
'''
def uodate_enviroment(sock:sock,infor:str):
    todo_str = 'todo'+'|'+'update'+'|'+infor
    sock.send(todo_str)
'''

def save_diary(content:str,key:str,path:str,key_path:str):
    Diarys.save(content,key,path,key_path)

def give_en_infor(sock:sock,infor:str):
    sock.send(get_todo_str('todo','show_en_infor',infor))


def begin_protection(dis:distance,sock:sock):
    if not dis.is_stoped : 
        # 这里保护已经开始了
        sock.send(get_todo_str('todo','protection_didnt_stop',' '))
    else:
        dis.begin()
        print('警戒模式已经开启')
        sock.send(get_todo_str('todo','protection_begin',' '))

def stop_protection(dis:distance,sock:sock):
    if dis.is_stoped:
        # 已经结束了：
        sock.send(get_todo_str('todo','protection_allreadly_stop',' '))
    else:
        dis.stop()
        sock.send(get_todo_str('todo','stop_protection',' '))


def send_alarm(alarm:alarm_clock):
    alarm.send_alarm_list()

def add_alarm(alarm:alarm_clock,h:str,m:str):
    alarm.add_alarms(int(h),int(m))
    print(alarm.alarm_list)

def delete_alarms(alarm:alarm_clock,which:str):
    which = int(which)
    alarm.delete_alarms(which)
    print(alarm.alarm_list)

def set_alarm(alarm:alarm_clock,lenth:str):
    alarm.relay.long_time_up(int(lenth))
