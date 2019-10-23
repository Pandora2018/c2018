/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : select.c
#   Last Modified : 2019-05-06 08:43
#   Describe      :
#
# ====================================================*/

#define EXERISE_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "preproc.h"

int main(void)
{
	srand((unsigned long int)time(NULL));

	int test[SIZE] = { 0 };

	for (int i = 0; i < SIZE; ++i)
		test[i] = rand() % 100 + 1;

	display_arr(test, SIZE);

	putchar('\n');
	
	unsigned int sel;

	printf("Selecet : ");
	while (scanf("%u", &sel) == 1)
	{
		assert(sel < SIZE);
		elect(test, SIZE, sel);
		putchar('\n');
		fputs("Again select : ", stdout);
	}

	return 0;
}
