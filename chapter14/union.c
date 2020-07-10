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

union woman
{
	unsigned char age;
	char sex[1];
	double height;
};

typedef union woman woman;

int main(void)
{
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
	
	woman Lily;
	Lily.age = 112;
	Lily.height = 2.12;

	printf("Lily's age:%hhu\n", Lily.age);
	printf("Lily's sex:%s\n", Lily.sex);
	printf("Lily's height:%.2f\n", Lily.height);

	printf("union woman use memory %zd byte\n", sizeof(woman));
	
	return 0;
}
