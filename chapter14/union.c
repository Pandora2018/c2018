/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : union.c
#   Last Modified : 2020-07-11 13:46
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "union.h"

typedef struct color
{
	union rgb
	{
		unsigned char red;
		unsigned char green;
		unsigned char blue;
	} rgb;
	
	int val;
} color;

int main(void)
{
	/* printf("struct color use %zd Bytes members\n", sizeof(color)); */
	
	color col = {98, 24};

	printf("color blue:%hhu\n", col.rgb.blue);
	printf("color val:%d\n", col.val);

#if 0
	union tree t = {0x12345678};

	/*
	 * t.age = 100;
	 * t.height = 10.03;
	 * t.flag = 1;
	 */

	printf("t.age = %#x\n", t.age);
	/* printf("t.flag = %d\n", t.flag); */
	/* printf("t.height = %.2f\n", t.height); */
	/* printf("p->height : %.2f\n", p->height); */
#endif
	
	return 0;
}
