'''
Author: codingFish 3251009898@qq.com
Date: 2023-09-29 16:40:16
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-04 20:29:24
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/ipFinder.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import socket
from passwork_sock import password_sock
import time

def ipFinder():
    # 先获取本地的ip
    self_ip = '' 
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    try:
        s.connect(('8.8.8.8', 80))
    except:
        print("设备没有接入局域网")
        s.close()
        exit()
    self_ip = s.getsockname()[0]
    print("本地ip获取成功")
    s.close()

    # 之后展开搜索
    timeout = 0.01
    ip_head = ''
    pointer = len(self_ip)-1
    while pointer >= 0:
        if self_ip[pointer] == '.':
            break
        else:
            pointer -= 1
    ip_head = self_ip[0:pointer+1]
    ip_list = []
    for i in range(0,255):
        scannered_ip = ip_head+str(i)
        try:
            s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            s.settimeout(timeout)
            result = s.connect_ex((scannered_ip, 6679))
            if result == 0:
                ip_list.append(scannered_ip)
        except:
            pass
        s.close()
    if self_ip in ip_list: ip_head.remove(self_ip)
    # 调试用消息：
    print(ip_list)

    '''
    # 之后开始筛选局域网内的ip哪一个是我们想要的
    obj_ip = ''
    for i in ip_list:
        ps = password_sock('172.20.10.3')
        ps.start()
        print('starting')
        time.sleep(3)
        if ps.is_object:
            obj_ip = i
            ps.stop()
            break
        #ans = ps.join()

    if obj_ip:
        return obj_ip
    else:
        print("没有找到ip")
        exit()
    '''
    return ip_list
    

if __name__ == '__main__':
    print(ipFinder())