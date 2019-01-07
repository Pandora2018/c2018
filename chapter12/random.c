/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : random.c
#   Last Modified : 2019-01-07 15:34
#   Describe      : rand function
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

static void show(void);

int main(void)
{
	printf("print random number:\n");

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 20);

	putchar('\n');

	show();

	return 0;
}

static void show(void)
{
	printf("int_max = %d\n", INT_MAX);
	printf("RAND_MAX = %d\n", RAND_MAX);

	return;
}
