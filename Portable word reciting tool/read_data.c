#include "read_data.h"

// ���ⲿROM��ȡָ����ַ��8bit���ݵĺ���
unsigned char read_data(unsigned int addr) {
    addr = addr & 0x7FFF;
    // ��ַ����
    P27 = 1;
    P0 = addr;
    P2 = addr >> 8;
    // ���ݴ���
    P27 = 0;
    //delay();
    P0 = 0xFF;
    //delay();
    // ��������
    return P0;
}

// ��ȡ���������ĺ���
int get_word_count() {
    return (int)read_data(0x1001);
}

// ��ȡָ��������Ϣ����������ĺ���
void get_word_info(int word_index, unsigned char *word_array) {
		int i = 0; // for
    int index_addr_base = 0x1002;  // ����������ʼ��ַ
    int data_addr_base = index_addr_base + (int)get_word_count() * 3;  
    int current_index_addr = index_addr_base + (word_index-1) * 3;
    int start_addr_high = read_data(current_index_addr);
    int start_addr_low = read_data(current_index_addr + 1);
    // ��ϳ���������ʼ��ַ
    int start_addr = ((start_addr_high << 8) | start_addr_low);
    // ���ʳ���
    int word_length = read_data(current_index_addr + 2);
    word_array[0] = word_length;
    for (i = 0; i < word_length; i++) {
        word_array[i + 1] = (unsigned char)read_data(start_addr + i);
    }
}
