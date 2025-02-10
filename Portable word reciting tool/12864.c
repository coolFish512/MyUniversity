#include "12864.h"
#include "delay.h"
uchar code Hzk[]={

/*-- ID:0,字符:"欢",ASCII编码:BBB6,对应字:宽x高=16x16,画布:宽W=16 高H=16,共32字节*/
0x04,0x34,0xc4,0x04,0xc4,0x3c,0x20,0x10,0x0f,0xe8,0x08,0x08,0x28,0x18,0x00,0x00,
0x10,0x08,0x06,0x01,0x82,0x8c,0x40,0x30,0x0c,0x03,0x0c,0x10,0x60,0xc0,0x40,0x00,

/*-- ID:1,字符:"赢",ASCII编码:D3AE,对应字:宽x高=16x16,画布:宽W=16 高H=16,共32字节*/
0x02,0x02,0x02,0xee,0xaa,0xaa,0xaa,0xab,0xaa,0xaa,0xaa,0xea,0x02,0x02,0x02,0x00,
0x80,0x7e,0xaa,0xfe,0x00,0x9e,0x42,0x3a,0x42,0x9e,0x80,0x7e,0x12,0x7e,0xc0,0x00,

/*-- ID:2,字符:"背",ASCII编码:B1B3,对应字:宽x高=16x16,画布:宽W=16 高H=16,共32字节*/
0x20,0x64,0x24,0x94,0x94,0xbf,0x80,0x80,0x80,0x9f,0xa4,0xe4,0xa4,0x22,0x38,0x00,
0x00,0x00,0x00,0xff,0x0a,0x0a,0x0a,0x0a,0x0a,0x4a,0x8a,0x7f,0x00,0x00,0x00,0x00,

/*-- ID:3,字符:"诵",ASCII编码:CBD0,对应字:宽x高=16x16,画布:宽W=16 高H=16,共32字节*/
0x40,0x42,0xcc,0x00,0x00,0xe2,0x22,0x22,0x2a,0xf2,0x2a,0x26,0x22,0xf0,0x20,0x00,
0x00,0x00,0x7f,0x20,0x10,0xff,0x09,0x09,0x09,0xff,0x09,0x49,0x89,0x7f,0x00,0x00,

// 4 笑脸
0xF0,0x5C,0x64,0x36,0x12,0x73,0x01,0x01,0x73,0x12,0x36,0x44,0x0C,0x38,0xE0,0x00,
0x0F,0x38,0x20,0x60,0x40,0x4E,0x48,0x48,0x48,0x44,0x40,0x40,0x60,0x30,0x1F,0x00,

//  5 左边指向的箭头
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x8C,0x98,0xB0,0x20,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x0C,0x06,0x02,0x01,0x00,0x00,

/*"背",6*/
0x20,0x64,0x24,0x94,0x94,0xBF,0x80,0x80,0x9F,0xA4,0xA4,0xA2,0x22,0x38,0x00,0x00,
0x00,0x00,0x00,0xFF,0x0A,0x0A,0x0A,0x0A,0x0A,0x4A,0x8A,0x7F,0x00,0x00,0x00,0x00,

/*"单",7*/
0x00,0x00,0xF8,0x49,0x4A,0x4C,0x48,0xF8,0x48,0x4C,0x4A,0x49,0xF8,0x00,0x00,0x00,
0x10,0x10,0x13,0x12,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x12,0x13,0x10,0x10,0x00,

/*"词",8*/
0x40,0x40,0x42,0xCC,0x00,0x10,0x92,0x92,0x92,0x92,0x92,0x12,0x02,0xFE,0x00,0x00,
0x00,0x00,0x00,0x7F,0x20,0x10,0x0F,0x08,0x08,0x08,0x0F,0x40,0x80,0x7F,0x00,0x00,

0x10,0x10,0xD0,0xFF,0x90,0x14,0xE4,0xAF,0xA4,0xA4,0xA4,0xAF,0xE4,0x04,0x00,0x00,
0x04,0x03,0x00,0xFF,0x00,0x89,0x4B,0x2A,0x1A,0x0E,0x1A,0x2A,0x4B,0x88,0x80,0x00,/*"模",9*/

0x10,0x10,0x90,0x90,0x90,0x90,0x90,0x10,0x10,0xFF,0x10,0x10,0x11,0x16,0x10,0x00,
0x00,0x20,0x60,0x20,0x3F,0x10,0x10,0x10,0x00,0x03,0x0C,0x10,0x20,0x40,0xF8,0x00,/*"式",10*/

0x40,0x40,0x42,0xCC,0x00,0x50,0x4E,0xC8,0x48,0x7F,0xC8,0x48,0x48,0x40,0x00,0x00,
0x00,0x40,0x20,0x1F,0x20,0x50,0x4C,0x43,0x40,0x40,0x4F,0x50,0x50,0x5C,0x40,0x00,/*"选",11*/

0x10,0x10,0xFF,0x10,0x00,0x82,0x86,0x4A,0x52,0xA2,0x52,0x4A,0x86,0x80,0x80,0x00,
0x42,0x82,0x7F,0x01,0x00,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00,0x00,/*"择",12*/

// 13 对号
0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0x38,0x18,0x08,
0x00,0x00,0x01,0x01,0x07,0x1E,0x0C,0x0E,0x07,0x03,0x01,0x00,0x00,0x00,0x00,0x00,

// 14 确认按钮
0x00,0x00,0xE0,0x30,0x08,0x0C,0x04,0x06,0x06,0x04,0x84,0x6C,0x18,0xF0,0x80,0x00,
0x00,0x00,0x0F,0x18,0x31,0x23,0x26,0x64,0x46,0x43,0x61,0x20,0x30,0x18,0x07,0x00,

// 15 切换按钮
0x00,0xF0,0x18,0x84,0x06,0x02,0x03,0x03,0x21,0x62,0xC2,0x86,0x0C,0x18,0xF0,0x00,
0x00,0x1F,0x30,0x21,0x21,0x41,0x41,0x41,0x45,0x43,0x43,0x41,0x40,0x60,0x39,0x0F,


// 16 盾
0x00,0x38,0xE4,0x04,0x04,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,
0x00,0x00,0x03,0x1E,0x30,0x20,0x40,0x40,0x3F,0x20,0x30,0x10,0x1C,0x06,0x03,0x00,

// 17 剑
0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0x78,0x3C,0x1C,0x0C,0x00,
0x00,0x43,0x77,0x3F,0x3C,0x3E,0x77,0x67,0x43,0x01,0x00,0x00,0x00,0x00,0x00,0x00,


// 18 对
0x00,0x08,0x48,0x88,0x08,0xC8,0x38,0x00,0x90,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x20,0x10,0x0C,0x03,0x04,0x18,0x00,0x00,0x43,0x80,0x7F,0x00,0x00,0x00,0x00,

// 19 战
0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x40,0x40,0x40,0xFF,0x20,0x22,0xAC,0x20,0x00,
0x00,0x7F,0x21,0x21,0x21,0x21,0x7F,0x80,0x40,0x20,0x17,0x18,0x26,0x41,0xF0,0x00,

// 20 选
0x40,0x40,0x42,0xCC,0x00,0x50,0x4E,0xC8,0x48,0x7F,0xC8,0x48,0x48,0x40,0x00,0x00,
0x00,0x40,0x20,0x1F,0x20,0x50,0x4C,0x43,0x40,0x40,0x4F,0x50,0x50,0x5C,0x40,0x00,/*"选",0*/

// 21 择
0x10,0x10,0xFF,0x10,0x00,0x82,0x86,0x4A,0x52,0xA2,0x52,0x4A,0x86,0x80,0x80,0x00,
0x42,0x82,0x7F,0x01,0x00,0x10,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x10,0x00,0x00,/*"择",1*/

// 22 起
0x40,0x48,0x48,0x48,0xFF,0x48,0x48,0x00,0xC4,0x44,0x44,0x44,0xFC,0x00,0x00,0x00,
0x80,0x60,0x1F,0x20,0x7F,0x44,0x44,0x40,0x4F,0x50,0x50,0x50,0x50,0x5C,0x40,0x00,/*"起",2*/

// 23 点
0x00,0x00,0xC0,0x40,0x40,0x40,0x7F,0x48,0x48,0x48,0x48,0xC8,0x08,0x08,0x00,0x00,
0x80,0x40,0x37,0x04,0x04,0x14,0x64,0x04,0x14,0x64,0x04,0x07,0x10,0xE0,0x00,0x00,

// 24 小花
0x00,0x00,0x38,0xE8,0x48,0x5E,0xEB,0xF1,0xF1,0xED,0x4F,0x44,0xE4,0xAC,0x38,0x00,
0x00,0x00,0x03,0x03,0x12,0x92,0xBA,0xFF,0xFF,0xBA,0x9A,0x1A,0x02,0x03,0x00,0x00,

// 25 小草
0x00,0x00,0x00,0x00,0xC0,0xF0,0x00,0x00,0xC0,0x30,0xE0,0x80,0x60,0xF0,0x00,0x00,
0x00,0x60,0x1C,0x03,0x00,0x03,0x06,0x03,0x00,0x00,0x07,0x03,0x00,0x01,0xFE,0x00,

// 26 太阳
0x80,0xA4,0xA4,0xC8,0x62,0x36,0x14,0x10,0x17,0x30,0x66,0xC0,0x0C,0x64,0x20,0x00,
0x00,0x08,0x04,0x3B,0x04,0x0C,0x38,0x68,0x08,0x0C,0x16,0x33,0x20,0x06,0x04,0x04,

// 27 乌云
0x00,0x00,0x80,0x80,0xE0,0x30,0x08,0x08,0x08,0x08,0x08,0x08,0xF0,0x80,0x80,0x00,
0x00,0x0F,0x11,0x10,0x70,0x10,0x70,0x10,0xB0,0x10,0xF0,0x11,0x71,0x10,0x19,0x07,

// 28 叉号
0x00,0xC0,0x30,0x18,0x08,0x2C,0x64,0xC4,0x84,0xC4,0xEC,0x28,0x18,0x10,0xF0,0x00,
0x00,0x0F,0x18,0x30,0x24,0x66,0x43,0x43,0x41,0x43,0x46,0x4E,0x20,0x30,0x0F,0x00,

0x00,0x00,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,0x00,
0x00,0x04,0x84,0x44,0x24,0x17,0x04,0x04,0x04,0x04,0x17,0x24,0x44,0x84,0x04,0x00,/*"共",29*/

0x40,0x30,0x11,0x96,0x90,0x90,0x91,0x96,0x90,0x90,0x98,0x14,0x13,0x50,0x30,0x00,
0x04,0x04,0x04,0x04,0x04,0x44,0x84,0x7E,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x00,/*"学",30*/

0x40,0x40,0x20,0x20,0x50,0x48,0x44,0x43,0x44,0x48,0x50,0x20,0x20,0x40,0x40,0x00,
0x00,0x02,0x42,0xE2,0x52,0x4A,0x46,0x42,0x42,0x42,0x52,0x62,0xC2,0x02,0x00,0x00,/*"会",31*/

0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"一",32*/

0x00,0x00,0xE0,0x30,0x18,0x08,0xC4,0xC4,0xC4,0xC4,0xC4,0x08,0x18,0x70,0xC0,0x00,
0x00,0x00,0x1F,0x30,0x20,0x60,0x47,0x47,0x47,0x47,0x47,0x60,0x30,0x1C,0x03,0x00,/*"home",33*/

0x80,0x80,0x40,0x20,0x50,0x48,0x44,0xC3,0x44,0x48,0x50,0x20,0x40,0x80,0x80,0x00,
0x00,0x40,0x40,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x40,0x40,0x00,0x00,/*"全",34*/

0x40,0x44,0x54,0x65,0x46,0x44,0x64,0x54,0x44,0x40,0xFE,0x02,0x22,0xDA,0x06,0x00,
0x00,0x00,0x7E,0x22,0x22,0x22,0x22,0x7E,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00,/*"部",35*/

0xE0,0x38,0x0C,0x86,0xC2,0xE3,0xB3,0x93,0x81,0x83,0x82,0x86,0x0C,0x38,0xE0,0x00,
0x07,0x18,0x20,0x21,0x63,0x47,0x4D,0x49,0x41,0x41,0x41,0x61,0x31,0x18,0x07,0x00,/*"左边箭头",36*/

0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00,
0x20,0x60,0x20,0x1F,0x10,0x90,0x40,0x23,0x18,0x06,0x01,0x7E,0x80,0x83,0xE0,0x00,/*"现",37*/

0x08,0x08,0x88,0xC8,0x38,0x0C,0x0B,0x08,0x08,0xE8,0x08,0x08,0x08,0x08,0x08,0x00,
0x02,0x01,0x00,0xFF,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x00,/*"在",38*/

0x40,0x40,0x42,0xCC,0x00,0x04,0x44,0x64,0x5C,0x47,0xF4,0x44,0x44,0x44,0x04,0x00,
0x00,0x40,0x20,0x1F,0x20,0x44,0x44,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x44,0x00,/*"连",39*/

0x20,0x30,0xAC,0x63,0x20,0x18,0x80,0x90,0x90,0xFF,0x90,0x49,0x4A,0x48,0x40,0x00,
0x22,0x67,0x22,0x12,0x12,0x12,0x40,0x40,0x20,0x13,0x0C,0x14,0x22,0x41,0xF8,0x00,/*"线",40*/

0x80,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x80,0x00,
0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,/*"开",41*/

0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x40,0xE0,0x58,0x47,0x40,0x50,0x60,0xC0,0x00,
0x40,0x22,0x15,0x08,0x16,0x21,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,/*"始",42*/

0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0x84,0x84,0x84,0x84,0xFC,0x00,0x00,0x00,
0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x3F,0x40,0x40,0x40,0x41,0x40,0x70,0x00, /*"配"，43*/

0x00,0x40,0x30,0x1E,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,
0x81,0x81,0x41,0x21,0x11,0x0D,0x03,0x01,0x03,0x0D,0x11,0x21,0x41,0x81,0x81,0x00,/*"失",44*/

0x00,0xFE,0x02,0xFA,0x02,0xFE,0x40,0x20,0xD8,0x17,0x10,0x10,0xF0,0x10,0x10,0x00,
0x80,0x47,0x30,0x0F,0x10,0x67,0x80,0x40,0x21,0x16,0x08,0x16,0x21,0x40,0x80,0x00,/*"败",45*/

0x00,0xC0,0x70,0x18,0x4C,0xC4,0x46,0x02,0x02,0x42,0xC6,0x44,0x0C,0x38,0xE0,0x00,
0x00,0x1F,0x20,0x60,0x40,0x46,0x50,0x48,0x48,0x50,0x46,0x40,0x40,0x70,0x1F,0x00,/*"哭脸",46*/

0x00,0xE0,0x38,0x0C,0x26,0x22,0x62,0xC2,0x02,0x46,0x64,0x24,0x2C,0x18,0x30,0xE0,
0x00,0x1F,0x30,0x60,0x40,0x43,0x4B,0xD8,0x90,0x90,0x9B,0xC3,0x60,0x30,0x1C,0x07,/*"战斗脸",47*/

0x40,0x42,0xCC,0x00,0x00,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00,
0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x15,0x15,0x15,0x55,0x95,0x7F,0x00,0x00,0x00,/*"请",48*/

0x00,0x08,0x28,0x48,0x88,0x08,0x08,0xFF,0x88,0x08,0x89,0x4A,0x28,0x08,0x00,0x00,
0x00,0x10,0x10,0x08,0x04,0x42,0x81,0x7F,0x00,0x01,0x02,0x04,0x08,0x10,0x10,0x00,/*"求",49*/

0x00,0xE0,0x38,0xC8,0x64,0x24,0xA6,0x03,0x02,0xA2,0x26,0xC4,0x0C,0xB8,0xE0,0x00,
0x00,0x1F,0x30,0x60,0x40,0x50,0x58,0x54,0x54,0x58,0x50,0x60,0x38,0x0F,0x00,0x00,/*"沮丧脸",50*/

0x00,0x08,0x48,0x88,0x08,0xC8,0x38,0x00,0x90,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x20,0x10,0x0C,0x03,0x04,0x18,0x00,0x00,0x43,0x80,0x7F,0x00,0x00,0x00,0x00,/*"对",51*/

0x00,0x00,0x00,0xFF,0x08,0x08,0x08,0x40,0x40,0x40,0xFF,0x20,0x22,0xAC,0x20,0x00,
0x00,0x7F,0x21,0x21,0x21,0x21,0x7F,0x80,0x40,0x20,0x17,0x18,0x26,0x41,0xF0,0x00,/*"战",52*/

0x20,0x30,0xAC,0x63,0x20,0x18,0x08,0x48,0x48,0x48,0x7F,0x48,0x48,0x48,0x08,0x00,
0x22,0x67,0x22,0x12,0x12,0x12,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,/*"结",53*/

0x04,0x04,0xE4,0x24,0x24,0x24,0x24,0xFF,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x00,
0x40,0x40,0x27,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x27,0x40,0x40,0x00,/*"束",54*/

0x00,0x80,0x60,0xF8,0x07,0x40,0x20,0x18,0x0F,0x08,0xC8,0x08,0x08,0x28,0x18,0x00,
0x01,0x00,0x00,0xFF,0x00,0x10,0x0C,0x03,0x40,0x80,0x7F,0x00,0x01,0x06,0x18,0x00,/*"你",55*/

0x00,0xF8,0x0C,0x0B,0x08,0x08,0xF8,0x40,0x30,0x8F,0x08,0x08,0x08,0xF8,0x00,0x00,
0x00,0x7F,0x21,0x21,0x21,0x21,0x7F,0x00,0x00,0x00,0x43,0x80,0x40,0x3F,0x00,0x00,/*"的",56*/

0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0x08,0x08,0xFF,0x08,0x09,0x0A,0xC8,0x08,0x00,
0x80,0x60,0x1F,0x00,0x10,0x20,0x1F,0x80,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00,/*"成",57*/

0x20,0x30,0xAC,0x63,0x10,0x44,0x54,0x54,0x54,0x7F,0x54,0x54,0x54,0x44,0x40,0x00,
0x22,0x67,0x22,0x12,0x12,0x80,0x9F,0x41,0x21,0x1D,0x21,0x41,0x9F,0x00,0x00,0x00,/*"绩",58*/

0x00,0x08,0x48,0x88,0x08,0xC8,0x38,0x00,0x90,0x10,0x10,0xFF,0x10,0x10,0x10,0x00,
0x00,0x20,0x10,0x0C,0x03,0x04,0x18,0x00,0x00,0x43,0x80,0x7F,0x00,0x00,0x00,0x00,/*"对",59*/

0x08,0x08,0x08,0x08,0x08,0xF8,0x89,0x8E,0x88,0x88,0x88,0x88,0x08,0x08,0x08,0x00,
0x00,0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x40,0x80,0x40,0x3F,0x00,0x00,0x00,0x00,/*"方",60*/

0x00,0x00,0x00,0x7F,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00,0x00,
0x81,0x41,0x21,0x1D,0x21,0x41,0x81,0xFF,0x89,0x89,0x89,0x89,0x89,0x81,0x81,0x00,/*"是",61*/

0x00,0x80,0x60,0xF8,0x07,0x40,0x20,0x18,0x0F,0x08,0xC8,0x08,0x08,0x28,0x18,0x00,
0x01,0x00,0x00,0xFF,0x00,0x10,0x0C,0x03,0x40,0x80,0x7F,0x00,0x01,0x06,0x18,0x00,/*"你",62*/

0x02,0x02,0xEE,0xAA,0xAA,0xAA,0xAA,0xAB,0xAA,0xAA,0xAA,0xAA,0xEA,0x02,0x02,0x00,
0x80,0x7E,0xAA,0xFE,0x00,0xBE,0x42,0x3A,0x42,0xBE,0x80,0x7E,0x12,0x7E,0xE0,0x00,/*"赢",63*/

0x00,0x02,0x02,0x02,0x02,0x02,0x02,0xE2,0x22,0x12,0x0A,0x06,0x02,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"了",64*/

0x20,0x30,0xAC,0x63,0x10,0x00,0xFE,0x48,0x50,0x40,0xFF,0x40,0x50,0x48,0x00,0x00,
0x22,0x67,0x22,0x12,0x12,0x00,0x7F,0x44,0x42,0x41,0x7F,0x41,0x42,0x44,0x40,0x00,/*"继",65*/

0x20,0x30,0xAC,0x63,0x20,0x18,0x20,0x24,0xA4,0x24,0x3F,0xA4,0x24,0xA4,0x60,0x00,
0x22,0x67,0x22,0x12,0x12,0x12,0x88,0x8A,0x4C,0x29,0x18,0x0F,0x18,0x28,0xC8,0x00,/*"续",66*/

0x04,0x14,0xAC,0x47,0xA4,0x14,0x0C,0x00,0x1C,0xA4,0x44,0xA4,0x94,0x0C,0x00,0x00,
0x01,0x89,0x88,0x48,0x28,0x19,0x0E,0x09,0x09,0x48,0x88,0x48,0x38,0x01,0x01,0x00,/*"努",67*/

0x00,0x10,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x10,0xF0,0x00,0x00,0x00,
0x00,0x80,0x40,0x20,0x18,0x06,0x01,0x00,0x20,0x40,0x80,0x40,0x3F,0x00,0x00,0x00/*"力",68*/


};
uchar code Szk[]={
/*--  ����:  0  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,0x00,0x0F,0x10,0x20,0x20,0x10,0x0F,0x00,

/*--  ����:  1  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,

/*--  ����:  2  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x70,0x08,0x08,0x08,0x08,0xF0,0x00,0x00,0x30,0x28,0x24,0x22,0x21,0x30,0x00,

/*--  ����:  3  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x30,0x08,0x08,0x08,0x88,0x70,0x00,0x00,0x18,0x20,0x21,0x21,0x22,0x1C,0x00,

/*--  ����:  4  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x40,0x30,0xF8,0x00,0x00,0x00,0x06,0x05,0x24,0x24,0x3F,0x24,0x24,

/*--  ����:  5  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0xF8,0x88,0x88,0x88,0x08,0x08,0x00,0x00,0x19,0x20,0x20,0x20,0x11,0x0E,0x00,

/*--  ����:  6  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0xE0,0x10,0x88,0x88,0x90,0x00,0x00,0x00,0x0F,0x11,0x20,0x20,0x20,0x1F,0x00,

/*--  ����:  7  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x18,0x08,0x08,0x88,0x68,0x18,0x00,0x00,0x00,0x00,0x3E,0x01,0x00,0x00,0x00,

/*--  ����:  8  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x70,0x88,0x08,0x08,0x88,0x70,0x00,0x00,0x1C,0x22,0x21,0x21,0x22,0x1C,0x00,

/*--  ����:  9  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0xF0,0x08,0x08,0x08,0x10,0xE0,0x00,0x00,0x01,0x12,0x22,0x22,0x11,0x0F,0x00,

};


uchar code Fhk[]={
/*--  ����:  +  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x0F,0x01,0x01,0x01,

/*--  ����:  -  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,

/*--  ����:  *  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,0x02,0x02,0x01,0x0F,0x01,0x02,0x02,0x00,

/*--  ����:  /  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x00,0xC0,0x38,0x04,0x00,0x00,0x60,0x18,0x07,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x36,0x00,0x00,0x00,0x00,

/*--  ����:  ��  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x38,0x34,0x02,0x82,0xC2,0x7C,0x00,0x00,0x00,0x00,0x00,0x37,0x37,0x00,

/*--  ����:  ~  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x02,0x01,0x02,0x02,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  ����:  %  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0xF0,0x08,0xF0,0x80,0x60,0x18,0x00,0x00,0x00,0x31,0x0C,0x03,0x1E,0x21,0x1E,0x00,

/*--  ����:  #  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x40,0xC0,0x78,0x40,0xC0,0x78,0x00,0x00,0x04,0x3F,0x04,0x04,0x3F,0x04,0x00,

/*--  ����:  <  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00,

/*--  ����:  >  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00,
};


uchar code Zmk[]={
/*--  ����:  A  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0xC0,0x38,0xE0,0x00,0x00,0x00,0x20,0x3C,0x23,0x02,0x02,0x27,0x38,0x20,

/*--  ����:  B  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x88,0x88,0x88,0x70,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x11,0x0E,0x00,

/*--  ����:  C  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0xC0,0x30,0x08,0x08,0x08,0x08,0x38,0x00,0x07,0x18,0x20,0x20,0x20,0x10,0x08,0x00,

/*--  ����:  D  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x08,0x08,0x08,0x10,0xE0,0x00,0x20,0x3F,0x20,0x20,0x20,0x10,0x0F,0x00,

/*--  ����:  E  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x20,0x23,0x20,0x18,0x00,

/*--  ����:  F  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x88,0x88,0xE8,0x08,0x10,0x00,0x20,0x3F,0x20,0x00,0x03,0x00,0x00,0x00,

/*--  ����:  G  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0xC0,0x30,0x08,0x08,0x08,0x38,0x00,0x00,0x07,0x18,0x20,0x20,0x22,0x1E,0x02,0x00,

/*--  ����:  H  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x20,0x3F,0x21,0x01,0x01,0x21,0x3F,0x20,

/*--  ����:  I  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  ����:  J  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x08,0x08,0xF8,0x08,0x08,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,0x00,

/*--  ����:  K  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x88,0xC0,0x28,0x18,0x08,0x00,0x20,0x3F,0x20,0x01,0x26,0x38,0x20,0x00,

/*--  ����:  L  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x00,0x00,0x00,0x20,0x3F,0x20,0x20,0x20,0x20,0x30,0x00,

/*--  ����:  M  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0xF8,0x00,0xF8,0xF8,0x08,0x00,0x20,0x3F,0x01,0x3E,0x01,0x3F,0x20,0x00,

/*--  ����:  N  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x30,0xC0,0x00,0x08,0xF8,0x08,0x20,0x3F,0x20,0x00,0x07,0x18,0x3F,0x00,

/*--  ����:  O  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x20,0x20,0x20,0x10,0x0F,0x00,

/*--  ����:  P  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x08,0x08,0x08,0x08,0xF0,0x00,0x20,0x3F,0x21,0x01,0x01,0x01,0x00,0x00,

/*--  ����:  Q  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0xE0,0x10,0x08,0x08,0x08,0x10,0xE0,0x00,0x0F,0x10,0x28,0x28,0x30,0x50,0x4F,0x00,

/*--  ����:  R  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x88,0x88,0x88,0x88,0x70,0x00,0x20,0x3F,0x20,0x00,0x03,0x0C,0x30,0x20,

/*--  ����:  S  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x70,0x88,0x08,0x08,0x08,0x38,0x00,0x00,0x38,0x20,0x21,0x21,0x22,0x1C,0x00,

/*--  ����:  T  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x18,0x08,0x08,0xF8,0x08,0x08,0x18,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

/*--  ����:  U  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x08,0x00,0x00,0x08,0xF8,0x08,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

/*--  ����:  V  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0x78,0x88,0x00,0x00,0xC8,0x38,0x08,0x00,0x00,0x07,0x38,0x0E,0x01,0x00,0x00,

/*--  ����:  W  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0xF8,0x00,0xF8,0x00,0xF8,0x08,0x00,0x00,0x03,0x3E,0x01,0x3E,0x03,0x00,0x00,

/*--  ����:  X  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0x18,0x68,0x80,0x80,0x68,0x18,0x08,0x20,0x30,0x2C,0x03,0x03,0x2C,0x30,0x20,

/*--  ����:  Y  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x08,0x38,0xC8,0x00,0xC8,0x38,0x08,0x00,0x00,0x00,0x20,0x3F,0x20,0x00,0x00,0x00,

/*--  ����:  Z  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x10,0x08,0x08,0x08,0xC8,0x38,0x08,0x00,0x20,0x38,0x26,0x21,0x20,0x20,0x18,0x00,

/*--  ����:  a  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x19,0x24,0x24,0x12,0x3F,0x20,0x00,

/*--  ����:  b  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x10,0xF0,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x3F,0x11,0x20,0x20,0x11,0x0E,0x00,

/*--  ����:  c  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x00,0x0E,0x11,0x20,0x20,0x20,0x11,0x00,

/*--  ����:  d  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x90,0xF0,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

/*--  ����:  e  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x24,0x24,0x24,0x24,0x17,0x00,

/*--  ����:  f  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x80,0x80,0xE0,0x90,0x90,0x20,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  ����:  g  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x6B,0x94,0x94,0x94,0x93,0x60,0x00,

/*--  ����:  h  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x10,0xF0,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

/*--  ����:  i  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  ����:  j  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,0x00,0xC0,0x80,0x80,0x80,0x7F,0x00,0x00,

/*--  ����:  k  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x10,0xF0,0x00,0x00,0x80,0x80,0x80,0x00,0x20,0x3F,0x24,0x06,0x29,0x30,0x20,0x00,

/*--  ����:  l  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x10,0x10,0xF8,0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x20,0x20,0x00,0x00,

/*--  ����:  m  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x20,0x00,0x3F,0x20,0x00,0x3F,

/*--  ����:  n  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x20,0x3F,0x21,0x00,0x00,0x20,0x3F,0x20,

/*--  ����:  o  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x1F,0x20,0x20,0x20,0x20,0x1F,0x00,

/*--  ����:  p  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,0x80,0xFF,0x91,0x20,0x20,0x11,0x0E,0x00,

/*--  ����:  q  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x00,0x00,0x0E,0x11,0x20,0x20,0x91,0xFF,0x80,

/*--  ����:  r  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x20,0x20,0x3F,0x21,0x20,0x00,0x01,0x00,

/*--  ����:  s  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x33,0x24,0x24,0x24,0x24,0x19,0x00,

/*--  ����:  t  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x20,0x10,0x00,

/*--  ����:  u  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x1F,0x20,0x20,0x20,0x10,0x3F,0x20,

/*--  ����:  v  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,0x03,0x0C,0x30,0x0C,0x03,0x00,0x00,

/*--  ����:  w  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x00,0x80,0x80,0x00,0x80,0x80,0x01,0x0E,0x30,0x0C,0x07,0x38,0x06,0x01,

/*--  ����:  x  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x20,0x31,0x0E,0x2E,0x31,0x20,0x00,

/*--  ����:  y  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x81,0x86,0x78,0x18,0x06,0x01,0x00,

/*--  ����:  z  --*/
/*--  ����12;  �������¶�Ӧ�ĵ���Ϊ����x��=8x16   --*/
0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x21,0x30,0x2C,0x22,0x21,0x30,0x00,
};

void CheckState(void)		
{
	 uchar dat;	
	 RS=0; 			
	 RW=1; 			 
	 do{
			DATA=0x00;
			EN=0;	
			dat=DATA;
			EN=1;
			dat=0x80 & dat; 
		}while(!(dat==0x00));
}


void SendCommandToLCD(uchar com)
{
	 CheckState();
	 RS=0;	 			
	 RW=0;
	 DATA=com;	 
	 EN=0;				
	 EN=1;
}


void SetLine(uchar page)	
{
	page=0xb8|page; 
	SendCommandToLCD(page);
}

void SetStartLine(uchar startline) 	   
{
	startline=0xc0|startline; 
	SendCommandToLCD(startline); 
}

void SetColumn(uchar column)	
{
	 column=column &0x3f; 
	 column= 0x40|column; 
	 SendCommandToLCD(column);
}

void SetOnOff(uchar onoff)	   
{
	 onoff=0x3e|onoff; 
	 SendCommandToLCD(onoff);
}

void WriteByte(uchar dat)	
{
	 CheckState();
	 RS=1; 
	 RW=0;
	 DATA=dat;
	 EN=0; 
	 EN=1;
}

/*void SelectScreen(uchar screen)	  
{
	switch(screen)
  {
		case 0: cs1=0;cs2=0;break; 
		case 1: cs1=1;cs2=0;break;		
		case 2: cs1=0;cs2=1; break;	
  }
}*/
void SelectScreen(uchar screen)	  
{
	switch(screen)
  {
		case 0: cs1=1;break; 
		case 1: cs1=1;break; 		
		case 2: cs1=0;break;	
  }
}

void ClearScreen(uchar screen)	  
{
	 uchar i,j;
	 SelectScreen(screen);
	 for(i=0;i<8;i++)	 		
	 {
		 SetLine(i);
		 SetColumn(0);
		 for(j=0;j<64;j++)	
		 {WriteByte(0x00);} 
	 }
}


void InitLCD() 	  
{
	 CheckState();
	 SelectScreen(0);
	 SetOnOff(0);
	 SelectScreen(0);
	 SetOnOff(1); 
	 SelectScreen(0);
	 ClearScreen(0);
	 SetStartLine(0); 
}

void Display_HZ(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;
	 SetLine(page);	
	 SetColumn(column); 
	 for(i=0;i<16;i++)  
	 {
			WriteByte(Hzk[i+32*number]);
	 } 
	 SetLine(page+1);		 
	 SetColumn(column);	   
	 for(i=0;i<16;i++)	 
	 {
			WriteByte(Hzk[i+32*number+16]);
	 }
} 

void Display_ZM(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;
	 SetLine(page);	
	 SetColumn(column); 
	 for(i=0;i<8;i++)  
	 {
			WriteByte(Zmk[i+16*number]);
	 } 
	 SetLine(page+1);		
	 SetColumn(column);	   
	 for(i=0;i<8;i++)	  
	 {
			WriteByte(Zmk[i+16*number+8]);
	 }
}


void Display_SZ(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;
	 SetLine(page);	
	 SetColumn(column); 
	 for(i=0;i<8;i++)  
	 {
			WriteByte(Szk[i+16*number]);
	 } 
	 SetLine(page+1);		 
	 SetColumn(column);	   
	 for(i=0;i<8;i++)	  
	 {
			WriteByte(Szk[i+16*number+8]);
	 }
}

void Display_FH(uchar screen,uchar page,uchar column,uchar number)
{
	 int i;	
	 SelectScreen(screen);
	 column=column&0x3f;
	 SetLine(page);	
	 SetColumn(column); 
	 for(i=0;i<8;i++)  
	 {
			WriteByte(Fhk[i+16*number]);
	 } 
	 SetLine(page+1);		 
	 SetColumn(column);	   
	 for(i=0;i<8;i++)	  
	 {
			WriteByte(Fhk[i+16*number+8]);
	 }
}

int get_char_index(int asc)
{
	if(asc>=65 && asc<=90){return asc-65;}
	if(asc>=97 && asc<=122){return asc-71;}
	return 0;
}

void display_str(unsigned char* show_data,uchar page)
{
	int lenth = show_data[0];
	int i = 0; // for
	int k = 0; // for
	if(lenth<=16)
	{
		for(i=1;i<=lenth;i++)
		{
			if(i<=8){
				Display_ZM(2,page,(i-1)*8,get_char_index(show_data[i]));
			}else{
				Display_ZM(1,page,(i-1)*8,get_char_index(show_data[i]));
			}
		}
			
	}
	else
	{
		for(i=1;i<=16;i++)
		{
			if(i<=8){
				Display_ZM(2,page,(i-1)*8,get_char_index(show_data[i]));
			}else{
				Display_ZM(1,page,(i-1)*8,get_char_index(show_data[i]));
			}
		}
		for(i=17;i<=lenth;i++)
		{
			if(i<=24){
				Display_ZM(2,page+2,(i-1)*8,get_char_index(show_data[i]));
			}else{
				Display_ZM(1,page+2,(i-1)*8,get_char_index(show_data[i]));
			}
		}
		
	}
	for(i=1;i<=13;i++){
			show_data[i] = i-1+65;
	}
}

void display_number(int number,uchar page){
	int now_c = 0;
	int number_lenth = 0; 
	// 得到数字的位数
	if(number>0){
		if(number>100000000) number_lenth = 9;
		else if(number>10000000) number_lenth = 8;
		else if(number>1000000) number_lenth = 7;
		else if(number>100000) number_lenth = 6;
		else if(number>10000) number_lenth = 5;
		else if(number>1000) number_lenth = 4;
		else if(number>100) number_lenth = 3;
		else if(number>10) number_lenth = 2;
		else number_lenth = 1;
	}else{
		if(number<-100000000) number_lenth = 9;
		else if(number<-10000000) number_lenth = 8;
		else if(number<-1000000) number_lenth = 7;
		else if(number<-100000) number_lenth = 6;
		else if(number<-10000) number_lenth = 5;
		else if(number<-1000) number_lenth = 4;
		else if(number<-100) number_lenth = 3;
		else if(number<-10) number_lenth = 2;
		else number_lenth = 1;
	}

	
	
	if(number<0){
		Display_FH(2,page,now_c,1);
		number*=-1;
		now_c+=8;
	}
	while(number>10){
		Display_SZ(2,page,now_c,(int)number/(two_star(10,number_lenth-1)));
		number_lenth-=1;
		number%=two_star(10,number_lenth);
		now_c+=8;
	}
	Display_SZ(2,page,now_c,number);
	
}

int two_star(int a,int b){
	int ans = 1;
	for(;b>0;b--){
		ans*=a;
	}
	return ans;
}


void Clear(){
	ClearScreen(1);
	ClearScreen(2);
}