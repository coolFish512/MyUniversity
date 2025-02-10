'''
Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
Date: 2023-10-05 17:32:05
LastEditors: codingFish 3251009898@qq.com
LastEditTime: 2023-10-15 13:26:21
FilePath: /python_work/物联网课设/weatherAPI.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
import requests



class weatherAPI:
    def __init__(self) -> None:
        self.params =  {"key": "009b3ce78896d687b26de18373d80baf",
                        "extensions": "base",
                        "city": "hahaha"}         
        self.url = 'https://restapi.amap.com/v3/weather/weatherInfo?parameters' 
    
    def getWeather(self) -> str:
        response = requests.get(self.url,params=self.params)
        responseData = response.json()
        if responseData['lives'] == []:
            return '所在地:'+self.params["city"]+'\n'+'全中国找遍了,都没找到你这个所在地 :/ '
        data:dict = responseData['lives'][0]
        englishToHanzi = {
            'city':'所在地',
            'weather':'天气',
            'temperature':'气温',
            'winddirection':'风向',
            'windpower':'风力',
            'humidity':'湿度'
        }
        weatherStr = ''
        for i in englishToHanzi:
            weatherStr += '->' + englishToHanzi[i] + ':' + data[i] + '\n'
        weatherStr = weatherStr[:-1] # 去除最后的回车符号
        return weatherStr

    def changeCity(self,newCity:str):
            self.params["city"] = newCity

    
if __name__ == '__main__':
    w = weatherAPI()
    w.changeCity('山东')
    print(w.getWeather())

