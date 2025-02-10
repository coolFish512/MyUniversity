#include "read_data.h"

// 从外部ROM读取指定地址的8bit数据的函数
unsigned char read_data(unsigned int addr) {
    addr = addr & 0x7FFF;
    // 地址传输
    P27 = 1;
    P0 = addr;
    P2 = addr >> 8;
    // 数据传输
    P27 = 0;
    //delay();
    P0 = 0xFF;
    //delay();
    // 返回数据
    return P0;
}

// 获取单词数量的函数
int get_word_count() {
    return (int)read_data(0x1001);
}

// 获取指定单词信息并存入数组的函数
void get_word_info(int word_index, unsigned char *word_array) {
		int i = 0; // for
    int index_addr_base = 0x1002;  // 索引部分起始地址
    int data_addr_base = index_addr_base + (int)get_word_count() * 3;  
    int current_index_addr = index_addr_base + (word_index-1) * 3;
    int start_addr_high = read_data(current_index_addr);
    int start_addr_low = read_data(current_index_addr + 1);
    // 组合成完整的起始地址
    int start_addr = ((start_addr_high << 8) | start_addr_low);
    // 单词长度
    int word_length = read_data(current_index_addr + 2);
    word_array[0] = word_length;
    for (i = 0; i < word_length; i++) {
        word_array[i + 1] = (unsigned char)read_data(start_addr + i);
    }
}
