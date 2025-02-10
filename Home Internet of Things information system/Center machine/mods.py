import threading 
from zigbee import zigbeeData
import time
from sock import sock

class mods(threading.Thread):
    def __init__(self,sock:sock):
        threading.Thread.__init__(self)
        self.sock = sock
        self.modsList = ['mod1']
        self.zigbee = zigbeeData()
        self.zigbee.start()
        self.shouldWait = False
        self.showDict = {
            '1' : '已经开启警戒模式啦',
            '2' : '你还没有打开呢',
            'du change ok' : '角度设定成功',
            'du chaneg no' : '角度设定失败哦',
            'prot ok' : 'mod1开始保护',
            'prot stop ok' : 'mod1停止保护'
        }
        self.boolBuffer = False

    def intoMod(self,name:str):
        if name in self.modsList:
            self.sock.send(self.__showCmd('  --正在进入',False))
            self.zigbee.send(name+'todo|here')
            ##################################
            counter = 0
            isHere = False
            while counter<3:
                print(self.boolBuffer)
                if not self.boolBuffer :
                    counter += 1
                else:
                    print('  --进入成功！')
                    self.sock.send(self.__showCmd('  --进入成功',False))
                    time.sleep(1)
                    print('~~~~~~~~~~~~~~~~~~~~~~~~~~~~')
                    self.sock.send(self.__showCmd('~~~~~~~~~~~~~~~~~~~~~~~~~~~~',False))
                    time.sleep(1)
                    print('现在是：'+name+'模块'+':)')
                    self.sock.send(self.__showCmd(('现在是：'+name+'模块'+':)'),False))
                    # 下面就进入模块的小循环
                    self.boolBuffer = False
                    isHere = True
                    break
                time.sleep(1)
            ##################################
            if not isHere : 
                self.sock.send(self.__showCmd('  --模块好像不在线哦:(',False))
                time.sleep(1)
                self.sock.send('todo|mod not here')
                time.sleep(1)
                self.modOut(name=name)
                return
            else:
                isSended = False
                while True:
                    if self.shouldWait : continue
                    if not isSended:
                        self.sock.send('todo|get mod cmd|'+name)
                        isSended = True
                    what = ''
                    what = self.sock.read_data()
                    if what == '' : continue
                    isSended = False
                    if what == 'env':
                        self.zigbee.send(name+'todo|temp')
                        self.shouldWait = True
                    elif what == 'rotate':
                        self.zigbee.send(name+'todo|totate')
                    elif what == 'change du':
                        self.zigbee.send(name+'tudo|')
                    elif what == 'out mod':
                        self.sock.send(self.__showCmd('  ~~拜拜\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~',False))
                        time.sleep(1)
                        self.sock.send('todo|mod not here')
                        time.sleep(1)
                        break
                    elif what == 'begin protection':
                        self.sock.send(self.__showCmd('  --【'+name+'】正在开启警戒模式',False))
                        time.sleep(1)
                        self.zigbee.send(name+'todo|prot begin')
                    elif what == 'stop protection':
                        self.sock.send(self.__showCmd('  --【'+name+'】正在关闭警戒模式',False))
                        time.sleep(1)
                        self.zigbee.send(name+'todo|prot stop')
                    


                    
                    
        else:
            self.sock.send(self.__showCmd('  --还没有这个模块哦～',False))
            self.sock.send(self.__showCmd('  --可以输入\'add mod\'来添加！',False))
            
    
    def run(self):
        while True:
            data = self.zigbee.readCmdBuffer()

            if data == '' : 
                time.sleep(0.25)
                continue

            data = str(data)
            data = data[2:][:-1]
            print(data)

            if data == 'yes':
                self.boolBuffer = True
                continue
            
            data = data.split('|')

            print(data)

            if data[0] != 'todo': 
                print('接收到错误指令')
                print(data)
                continue 
            # 如果是todo指令
            if data[1] == 'show':
                # 展示某个东西
                print('  ~~'+self.showDict[data[2]])
                self.sock.send('todo|mod show|  ~mod1~'+self.showDict[data[2]])
            #--------------------------------
            elif data[1] == 'showtemp':
                tempData = data[2]
                if tempData == ' ':
                    print('  ~~温湿度获取失败:(')
                    self.sock.sock(self.__showCmd('  ~~温湿度读取失败',False))
                else:
                    print(tempData)
                    (t,d)  = tempData.split(' ')
                    #print('  ~~温度：'+t+'湿度：'+d)
                    self.sock.send(self.__showCmd(('  ~~温度：'+t+'湿度：'+d),False))
                    print('  ~~温度：'+t+'湿度：'+d)
                time.sleep(0.25)
                self.shouldWait = False
            #--------------------------------
            elif data[1] == 'protection_worning':
                # 入侵警告
                print('入侵警告')
                self.sock.send('todo|mod warning|mod1|'+data[3])
            elif data[1] == 'modhere':
                print(data[2]+'已就位')
                self.sock.send('todo|mod online|' + data[2])
            elif data[1] == 'modbye':
                print(data[2]+'下线')
                self.sock.send('todo|mod outline|' + data[2])
            
            time.sleep(1)

    def __showCmd(self,data:str,useDict = True) -> str:
        if useDict:
            return 'todo|mod show|'+self.showDict[data]
        else:
            return 'todo|mod show|' + data
    
    def modOut(self,name:str):
        #self.sock.send(self.__showCmd('~~~~~~~~~~~~~~~~~~~~~~~~~~~~',False))
        self.sock.send('todo|mod out|'+name)
