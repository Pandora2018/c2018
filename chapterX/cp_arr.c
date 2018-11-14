
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : cp_arr.c
#   Last Modified : 2018-11-14 08:23
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	double source[] = {2.78, 3.14, 1.1, 1000.23, 20.0, 3.6, 45.36, -12.98};
	size_t size = sizeof(source) / sizeof(source[0]);
	double target1[size], target2[size], target3[size];

	printf("source array:\n");
	sh_arr(source, source + size);

	printf("target1 array:\n");
	cp_arr(source, target1, size);
	sh_arr(target1, target1 + size);

	printf("target2 array:\n");
	cp_point(target3, source, source + size);
	sh_arr(target3, target3 + size);

	return 0;
}


void cp_arr(const double source[], double target[], int size)
{
	for (int index = 0; index < size; index++)
		// *(target + index) = *(source + index);
		target[index] = source[index];

	return;
}


void cp_point(double * target, const double * start, const double * end)
{
	while (start < end)
	{
		// *target++ = *start++;
		*target = *start;
		start++;
		target++;
	}
}


void  sh_arr(const double * start, const double * end)
{
	while (start < end)
	{
		printf("%.2f ", *start);
		start++;
	}

	putchar('\n');

	return;
}
