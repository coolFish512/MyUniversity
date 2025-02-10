'''
Author: codingFish 3251009898@qq.com
Date: 2023-10-02 14:46:23
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-02 16:53:48
FilePath: /与树莓派实现数据的双向传输/物联网工程课设/hanzi_encryption.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
from random import choice
from oOreader import oOreader

class hanzi_encryption():
    def __init__(self) -> None:
        self.oOreader = oOreader('1',with_the_key=True)

    def encrypt(self, data: str) -> (str,str) :
        numbers = []
        for i in range(0,len(data)):


            numbers.append(i)
        encrypted_data = ''
        key = []
        for i in range(0,len(numbers)):
            number = choice(numbers)
            numbers.remove(number)
            key.append(number)
            encrypted_data += data[number]
        key_str = ''
        for i in key:
            key_str += str(i)
            key_str += ' '
        key_str = self.oOreader.to_oO(key_str)
        return encrypted_data, key_str
    
    def decrypt(self, data: str, key_str: str) -> str:
        key_str = self.oOreader.to_str(key_str)
        key = []
        pointer = 0
        buffer = ''
        while pointer < len(key_str):
            if key_str[pointer] == ' ':
                key.append(int(buffer))
                buffer = ''
            else:
                buffer += key_str[pointer]
            pointer += 1
        int_hanzi_dict = {}
        for i in range(len(key)):
            int_hanzi_dict[key[i]] = data[i]
        decrypted_data = ''
        for i in range(0,len(data)):
            decrypted_data += int_hanzi_dict[i]
        return decrypted_data


if __name__ == '__main__':
    h = hanzi_encryption()
    data = input('请输入要加密的数据: ')
    encrypted_data, key_str = h.encrypt(data)
    print(encrypted_data)
    print(key_str)
    decrypted_data = h.decrypt(encrypted_data, key_str)
    print(decrypted_data)
