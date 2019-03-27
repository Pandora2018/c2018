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
	union tree t = {.height = 4.5};
	/*
	 * union tree *p = &(union tree) {.height = 2.30};
	 * p = &t;
	 */

	t.age = 100;
	t.height = 10.03;
	t.flag = 1;

	/* printf("sizeof(p) = %zd Byte\n", sizeof(p)); */

	printf("sizeof(t) : %zdByte\n", sizeof(t));
	printf("sizeof(union tree) %zd Byte\n", sizeof(union tree));

	/* printf("t.age = %d\n", t.age); */
	/* printf("t.flag = %d\n", t.flag); */
	printf("t.height = %.2f\n", t.height);
	/* printf("p->height : %.2f\n", p->height); */

	return 0;
}
