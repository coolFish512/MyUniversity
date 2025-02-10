from random import *

class oO:
    '''具有产生加密信息的能力,也有解密的能力'''
    def __init__(self,with_the_key = False): 
        if not with_the_key:
            (self.__key_dict,self.__key) = self.__creat_key_dict()
            self.__is_giveout_key = False
            self.__key_dict_T = self.__get_key_T()
        else:
            self.__is_giveout_key = False
            self.__key = [i for i in range(0,36)]
            self.__key_dict = {}
            oO_list = []
            for i in ['o.O','O.o','o.o','O.O',' ? ','?! ']:
                for j in ['o.O','O.o','o.o','O.O',' ? ','?! ']:
                    oO_list.append(i+j)
            for i in range(0,36):
                self.__key_dict[i] = oO_list[i]
            self.__key_dict_T = self.__get_key_T()
            

    def got_key(self):
        '''只能用一次的回去密钥，在初始化时用'''
        if not self.__is_giveout_key:
            return str(self.__key)
        

    def to_oO(self,data:str) -> str:
        changed_asc = []
        upper_english = []

        if len(data) == 0:
            return ''

        for i in range(0, len(data)):
            char = data[i]
            asc = ord(char)
            if asc>=48 and asc<=57:
                asc-=48
            elif asc>=65 and asc<=90:
                asc-=55
                upper_english.append(i)
            elif asc>=97 and asc<=122:
                asc-=87
            elif char == ' ':
                asc = 888
            elif char == '\n':
                asc = 999
            changed_asc.append(asc)
        
        oO = ''
        for i in range(0, len(changed_asc)):
            if changed_asc[i]>=0 and changed_asc[i]<=9:
                oO += (choice(['??','!!'])+self.__key_dict[changed_asc[i]])
            elif changed_asc[i]>=10 and changed_asc[i]<=35:
                if i in upper_english:
                    oO += (choice(['oo','OO'])+self.__key_dict[changed_asc[i]])
                else:
                    oO += self.__key_dict[changed_asc[i]]
            elif changed_asc[i] == 888:
                oO += choice(['oOo','Ooo'])
            elif changed_asc[i] == 999:
                oO += choice(['OoO','oOO'])

        return oO               

    
    def to_str(self,oO:str) -> str:

        if len(oO) == 0:
            print('空的密码')
            return ''
        
        pointer = 0
        real_str = ''
        asc_list = []

        while pointer<=(len(oO)-1):
            reader = pointer
            read_str = ''
            read_str += oO[reader]
            reader += 1
            read_str += oO[reader]
            if read_str in ['??','!?','!!']:
                # 这是数字
                read_str = ''
                for i in range(0,6):
                    reader+=1
                    read_str += oO[reader]
                asc_list.append(self.__key_dict_T[read_str]+48)
                pointer  = reader+1
            elif read_str in ['oo','OO']:
                # 这是大写字母
                read_str = ''
                for i in range(0,6):
                    reader+=1
                    read_str += oO[reader]
                asc_list.append(self.__key_dict_T[read_str]+55)
                pointer  = reader+1
            else:
                # 这是小写字母或者换行或者空格
                reader += 1
                read_str += oO[reader]
                if read_str in ['oOo','Ooo']:
                    # 是空格
                    asc_list.append(32)
                    pointer = reader + 1
                elif read_str in ['OoO','oOO']:
                    # 是换行
                    asc_list.append(10)
                    pointer = reader + 1
                else:
                    # 是小写字母
                    for i in range(0,3):
                        reader+=1
                        read_str += oO[reader]
                    asc_list.append(self.__key_dict_T[read_str]+87)
                    pointer = reader + 1
        
        #print(asc_list)

        for i in asc_list:
            real_str += chr(i)
        
        #print(real_str)
        return real_str
        

    def __creat_key_dict(self) -> (dict,[int]):
        key_dict = {}
        oO_list = []
        for i in ['o.O','O.o','o.o','O.O',' ? ','?! ']:
            for j in ['o.O','O.o','o.o','O.O',' ? ','?! ']:
                oO_list.append(i+j)
        number_list = [i for i in range(0,36)]
        history = []
        for i in range(0,36):
            number = choice(number_list)
            key_dict[number] = oO_list[i]
            number_list.remove(number)
            history.append(number)
        return key_dict, history


    def __get_key_T(self) -> dict:
        key_T = {}
        for i in range(0,36):
            key_T[self.__key_dict[i]] = i
        return key_T