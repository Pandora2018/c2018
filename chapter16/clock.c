/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : clock.c
#   Last Modified : 2019-05-05 11:54
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t start = clock();

	for (int i = 0; i < 1.0e10; ++i)
		continue;

	clock_t end = clock();

	printf("Runtime : %.7fs\n", (double)(end - start) / CLOCKS_PER_SEC);

	return 0;
}
