'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-02 17:45:03
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-05 20:26:33
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/command.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from sock import Sock
import datetime
import time

def get_todo_str(*words):
    todo_str = ''
    for i in range(0,len(words)):
        if i : todo_str += '|'
        todo_str += words[i]
    return todo_str

def got_diary_to_write(sock:Sock):
    date = str(datetime.datetime.now().date())
    print(' --今天是：'+date)
    # 处理一下date字符串
    date_split = date.split('-')
    year = date_split[0]
    mouth = date_split[1]
    day = date_split[2]
    # 组成设想的文件路径:
    path = '/home/pi/Documents/python_work/物联网课设/'+'diarys'+'/'+year+'-'+mouth+'-'+day+'.txt'
    key_path = '/home/pi/Documents/python_work/物联网课设/'+'diarys'+'/'+year+'-'+mouth+'-'+day+'_key'+'.txt'
    command = ''
    command += 'todo'+'|'+'wd'+'|'+path+'|'+key_path
    sock.send(command)
    return 


def exit_it(sock:Sock):
    command = 'todo'+'|'+'exit'+'|'+' '
    sock.send(command)


def get_enviroment_infor(sock:Sock):
    sock.send(get_todo_str('todo','give_en_infor',' '))


def got_diary_to_read(sock:Sock):
    print('  --请输入年、月、日：')
    year = input('  --年 >')
    month = input('  --月 >')
    if len(month) == 1:
        new_month = '0'+month
        month = new_month
    day = input('  --日 >')
    if len(day) == 1:
        new_day = '0'+day
        day = new_day
    path = '/home/pi/Documents/python_work/物联网课设/diarys/'+year+'-'+month+'-'+day+'.txt'
    key_path = '/home/pi/Documents/python_work/物联网课设/diarys/'+year+'-'+month+'-'+day+'_key'+'.txt'
    command = get_todo_str('todo','rd',path,key_path)
    sock.send(command)


def begin_protection(sock:Sock):
    '''开启保护模式'''
    print('  --保护模式开启中...')
    command = get_todo_str('todo','begin_protection')
    sock.send(command)


def stop_protection(sock:Sock):
    '''关闭保护模式'''
    print('  --保护模式关闭中...')
    command = get_todo_str('todo','stop_protection')
    sock.send(command)


def warning_report():
    print('  --下面是所有的警告报告')
    report = ''
    with open('warning_report.txt','r') as f:
        report = f.read()
    print('--------------------------')
    print(report)
    print('--------------------------')
    if report != '':
        print('  --是否清空？(Y or N)')
        response = input('  >')
        if response == 'Y' or response == 'y':
            with open('warning_report.txt','w') as f:
                f.write('')
            print('  --警告报告已清空')
        elif response == 'N' or response == 'n':
            print('  --警告报告继续保留')
        else:
            print('  --输入错误,警告报告继续保留')

def alarm(sock:Sock):
    sock.send(get_todo_str('todo','send alarm',' '))

def set_alarm(sock:Sock):
    print('  --请问要设定几秒钟的声音？(不要超过5秒哦～)')
    response = input('  --秒数 >')
    if int(response) > 5:
        print('  --超过5秒了,按5秒钟算哦')
    print('  --‘滴滴’声后将开始记录，直到‘滴’声后停止')
    sock.send(get_todo_str('todo','set alarm',response))

def change_location(s:Sock):
    print('  --请输入你的新所在地：')
    newLocation = input(' --新所在地 >')
    s.send(get_todo_str('todo','change location',newLocation))
    time.sleep(1)
    print('  --所在地已更改成为：'+newLocation)

def help():
    whatCanDo = ''
    with open('help.txt','r') as f:
        whatCanDo = f.read()
    print(whatCanDo)