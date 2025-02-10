'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-03 09:48:14
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:26:53
FilePath: /python_work/物联网课设/Diarys.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import os

def get_contentAndKey(path:str,key_path:str) -> [str]:
    content = ''
    key_str = ''
    with open(path,'r') as f:
        content = f.read()
    with open(key_path,'r') as f:
        key_str = f.read()
    return content,key_str

def save(content:str,key:str,path:str,key_path:str):
    with open(path,'w') as f:
        f.write(content)
    with open(key_path,'w') as f:
        f.write(key)

if __name__ == '__main__':
    print(get_contentAndKey('/home/pi/Documents/python_work/物联网课设/diarys/2023-10-03.txt',
                            '/home/pi/Documents/python_work/物联å网课设/diarys/2023-10-02_key.txt'))
    
    