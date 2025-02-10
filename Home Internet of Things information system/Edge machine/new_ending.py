'''
Author: codingFish 3251009898@qq.com
Date: 2023-09-30 17:52:13
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 09:37:45
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/new_ending.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from ipFinder import *
from passwork_sock import *
from sock import *
import command
import toDo
from hanzi_encryption import hanzi_encryption
from distance_protection import dis_prot

# 获取局域网内的所有的设备的列表
ip_neighbers = ipFinder()

mods_list = []

# 在列表中寻找要链接的设备的ip
obj_ip = ''
for i in ip_neighbers:
    ps_sock = password_sock(i)
    result = ps_sock.ip_identify()
    if result[0]:
        obj_ip = result[1]
        print('设备ip已经找到')
        break

time.sleep(3) # 等待3秒钟，让树莓派绑定端口
# 与设备之间构建信息通道
s = Sock(obj_ip,10124)
s.start()
time.sleep(3)
if s.init_oOreader():
     # 马上创建加密通道
    print('收到密钥，加密通道建立成功')
else:
    print('没有收到密钥，加密通道建立失败')

################################################################
# 进入循环前的初始化工作
shoule_continue = False
dis_p = dis_prot(s)
dis_p.start()
#is_in_mod = False
################################################################

while True:
    now_data = ''
    '''
    times_counter = 0
    while times_counter < 25:
        now_data = s.read_data()
        if now_data:
            break
        times_counter += 1
        time.sleep(0.1)
    '''
    now_data = s.read_data()
    if now_data != '' and shoule_continue :
        shoule_continue = False
    # 先进行todo请求的检查：
    ################################
    if now_data[0:4] == 'todo':
        todo_split = now_data.split('|')
        if todo_split[1] == 'showdiary':
            toDo.show_and_save_diary(s,todo_split[2],todo_split[3],todo_split[4],todo_split[5])
        elif todo_split[1] == 'show_en_infor':
            toDo.show_en_infor(todo_split[2])
        elif todo_split[1] == 'showdiaryToRead':
            toDo.show_diary_to_read(s,todo_split[2], todo_split[3])
        elif todo_split[1] == 'protection_didnt_stop':
            toDo.protection_didnt_stop()
        elif todo_split[1] == 'protection_begin':
            toDo.protection_begin(dis_p)
        elif todo_split[1] == 'protection_allreadly_stop':
            toDo.protection_allreadly_stop()
        elif todo_split[1] == 'stop_protection':
            toDo.stop_protection(dis_p)
        elif todo_split[1] == 'show_alarm_list':
            toDo.show_alarm_list(s,todo_split[2])
        elif todo_split[1] == 'mod outline': 
            if todo_split in mods_list:
                mods_list.remove(todo_split[2])
        elif todo_split[1] == 'mod online':
            mods_list.append(todo_split[2])
        '''
        elif todo_split[1] == 'mod show': #
            toDo.modShow(todo_split[2])#
        elif todo_split[1] == 'mod out':
            is_in_mod = False
        elif todo_split[1] == 'get mod cmd':
            toDo.get_mod_cmd(s,todo_split[2])##
        elif todo_split[1] == 'mod online':  
            mods_list.append(todo_split[2])
        elif todo_split[1] == 'mod outline': 
            if todo_split in mods_list:
                mods_list.remove(todo_split[2])
        elif todo_split[1] == 'mod not here': # 保留
            is_in_mod = False
        '''
    ################################
    if shoule_continue:
        continue
    ################################
    what = input('>>')
    if dis_p.warning_is_showed : 
        dis_p.warning_is_showed = False
        continue
    if what == 'check data':
        data = now_data
        if data:
            print("  --目前消息："+data)
        else:
            print("  --没有任何消息")
    elif what == 'exit':
        s.close()
        break
    elif what == 'env':
        command.get_enviroment_infor(s)
        shoule_continue = True
    elif what == 'write diary':
        command.got_diary_to_write(s)
        shoule_continue = True
    elif what == 'read diary':
        command.got_diary_to_read(s)
        shoule_continue = True
    elif what == 'begin protection':
        command.begin_protection(s)
        shoule_continue = True
    elif what =='stop protection':
        command.stop_protection(s)
        shoule_continue = True
    elif what == 'exit it':
        command.exit_it(s)
    elif what == 'warning report':
        command.warning_report()
    elif what == 'alarm':
        shoule_continue = True
        command.alarm(s)
    elif what == 'set alarm':
        command.set_alarm(s)
    elif what == 'change location':
        command.change_location(s)
    elif what == 'help':
        command.help()
    elif  what.split(' ')[0] == 'into':
        mods_list = toDo.intoMod(s,what.split(' ')[1],modList=mods_list)
        #is_in_mod = True
    elif what == 'mods':
        print(mods_list)
    else:
        print('  --没有这个指令，请稍后再试。。。')


