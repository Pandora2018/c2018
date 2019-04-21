/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit_field.c
#   Last Modified : 2019-04-21 08:22
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

struct bit_field
{
	unsigned char bold : 1;		// bit variable use 1 bit
	unsigned char flag : 1;
	unsigned char : 0;

	unsigned int color : 5;
};

int main(void)
{
	struct bit_field bit = { 0 };

	bit.bold = 1;
	bit.flag = 0;
	bit.color = 31;
	
	printf("sizeof(bit) = %zd Byte\n", sizeof(bit));

	printf("bold = %hhu, flag = %hhu, color = %hhu\n", bit.bold, bit.flag, bit.color);

	return 0;
}
