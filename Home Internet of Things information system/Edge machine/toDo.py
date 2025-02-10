'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-02 19:00:21
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-14 23:54:18
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/toDo.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AEro
'''

from sock import Sock
#from distance_protection import dis_prot
import time

def get_todo_str(*words):
    todo_str = ''
    for i in range(0,len(words)):
        if i : todo_str += '|'
        todo_str += words[i]
    return todo_str


def show_diary_to_read(sock:Sock,content:str,key:str):
    if content == ' ' or key == ' ':
        print('  --这一天你没有写日记呢～')
    else:
        diary = sock.hanzi_encryption.decrypt(content,key)
        print('  --下面你在这一天的日记')
        print('--------------------------------')
        print(diary)
        print('--------------------------------')


def show_and_save_diary(sock:Sock,content:str,key:str,path:str,key_path:str):
    if content != ' ' and key != ' ':
        diary = sock.hanzi_encryption.decrypt(content,key)
        print('  --这是你之前写的：'+'\n'+diary)
        print('  --在下方写下你最后想写入的内容:')
        print('********************************')
        new_diary = input('->')
        print('********************************')
        new_content,new_key = sock.hanzi_encryption.encrypt(new_diary)
        sock.send('todo'+'|'+'save_diary'+'|'+new_content+'|'+new_key+'|'+path+'|'+key_path)
        print('  --保存成功')
    else:
        print('  --在下方写入你今天的日记吧～')
        print('********************************')
        diary = input('->')
        print('********************************')
        content,key = sock.hanzi_encryption.encrypt(diary)
        sock.send('todo'+'|'+'save_diary'+'|'+content+'|'+key+'|'+path+'|'+key_path)
        print('  --保存成功')



def show_en_infor(infor:str):
    print(infor)

def protection_didnt_stop():
    print('  --已经开启保护模式啦！')

def protection_allreadly_stop():
    print('  --目前没有开启保护模式哦')

def protection_begin(dis_p):
    if dis_p.is_working:
        print('  --已经开启保护模式啦！')
    else:
        dis_p.begin()

def stop_protection(dis_p):
    if dis_p.is_working:
        dis_p.stop()
    else:
        print('  --目前没有开启保护模式哦')

def show_alarm_list(sock:Sock,list_str_oO:str):
    if list_str_oO != '':
        list_str = sock.oOreader.to_str(list_str_oO)
        list_str_split = list_str.split('\n')
        alarm_list = []
        for i in list_str_split:
            if i == '':
                continue
            (h,m) = i.split(' ')
            i = h + ':' + m
            alarm_list.append(i)
    else:
        alarm_list = []
    print('  --以下是所有的闹钟：')
    print('------------------')
    counter = 1
    if alarm_list != []:
        for i in alarm_list:
            print(str(counter)+'----'+i)
            counter += 1
    else:
        print('------暂无闹钟------')
    print('------------------')
    print('  --是否要添加闹钟(A)、删除闹钟(B)或者什么也不做(C)')
    response = input('  >')
    if response == 'A':
        print('  --请输入你要添加的闹钟的时间：')
        h = input('  --小时 >')
        m = input('  --分钟 >')
        sock.send('todo'+'|'+'add_alarm'+'|'+str(h)+'|'+str(m))
        print('  --闹钟添加成功')
    elif response == 'B':
        print('  --要删除第几个闹钟呀？')
        which = input('  --序号 >')
        if 0<int(which)<counter :
            sock.send('todo'+'|'+'delete_alarms'+'|'+str(which))
            print('  --闹钟删除成功')
        else:
            print('  --找不到这个序号对应的闹钟哦')
    elif response == 'C':
        print('  --好滴～')
    else:
        print('  --这是啥意思？就当你什么都不做了 :) ')


def modShow(data:str):
    print(data)

def intoMod(sock:Sock,name:str,modList:[str]):
    list:[str] = modList
    sock.send(get_todo_str('todo','into',name))
    # 之后开始进入循环
    while True:
        time.sleep(0.2)
        data = sock.read_data()
        if data == ' ':
            continue
        else:
            #print(data)
            data = data.split('|')
            if data[0] != 'todo' : continue
            if data[1] == 'mod show' :
                modShow(data[2])
            elif data[1] == 'mod out':
                break
            elif data[1] == 'get mod cmd':
                '''这个指令是专门让用户输入的！'''
                get_mod_cmd(sock,data[2])
            elif data[1] == 'mod online':
                list.append(data[2])
            elif data[1] == 'mod outline':
                if data[2] in list:
                    list.remove(data[2])
            elif data[1] == 'mod not here':
                break
            
    return list

def get_mod_cmd(sock:Sock,name:str):
    cmd = input('  >'+name+'>')
    sock.send(cmd)