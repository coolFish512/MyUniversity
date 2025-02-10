#include <reg51.h>


sbit P27 = P2 ^ 7;  



unsigned char read_data(unsigned int addr);


int get_word_count();


void get_word_info(int word_index, unsigned char *word_array) ;