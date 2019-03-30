/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : union.c
#   Last Modified : 2019-03-27 10:38
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "union.h"

int main(void)
{
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

	return 0;
}
