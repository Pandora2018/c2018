
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_arr.c
#   Last Modified : 2018-11-16 18:23
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int rows, cols;
	double all_avg, min, max;

	printf("From keyboard to rows and cols:\n");
	scanf("%d %d", &rows, &cols);

	// test is variable length array
	double test[rows][cols];

	getd_arr(rows, cols, test);
	putchar('\n');

	for (int i = 0; i < rows; i++)
		printf("%dth line average : %.2f\n", i + 1, ard_avg(cols, *(test + i)));

	putchar('\n');
	
	all_avg = ard_all_avg(rows, cols, test);
	printf("test array all element average : %.2f\n", all_avg);

	putchar('\n');

	max = getd_max(rows, cols, test);
	min = getd_min(rows, cols, test);
	printf("test array max value : %.2f\n", max);
	printf("test array min value : %.2f\n", min);

	putchar('\n');

	printf("primary array:\n");
	shd_arr(rows, cols, test);

	putchar('\n');
	
	printf("inverse array:\n");
	for (int i = 0; i < rows; i++)
		ard_inverse(cols, *(test + i));

	shd_arr(rows, cols, test);

	return 0;
}
