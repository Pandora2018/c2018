/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : random.c
#   Last Modified : 2019-01-06 16:14
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("print random number:\n");

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 20);

	return 0;
}
