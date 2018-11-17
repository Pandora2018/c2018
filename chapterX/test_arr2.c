
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_arr2.c
#   Last Modified : 2018-11-17 10:02
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int rows, cols;

	printf("enter rows and cols:\n");
	scanf("%d %d", &rows, &cols);

	double test[rows][cols];

	mkd_arr(rows, cols, test);
	printf("primer array:\n");
	shd_arr(rows, cols, test);

	for (int i = 0; i < rows; i++)
		ard_inverse(cols, *(test + i));

	putchar('\n');
	shd_arr(rows, cols, test);

	return 0;
}
