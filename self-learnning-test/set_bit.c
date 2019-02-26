/*
 *12、给定一个整型变量a，写两段代码，第一个设置a的bit3，第二个清除a的bit，在以上两个操作中，
 * 要保持其它位不变。
 * */
#include <stdio.h>

#define BIT3 (0x1 << 3)
static int a;

void set_bit(void)
{
	a |= BIT3；
}

void clear_bit3(void)
{
	a &= ~BIT3；
}
