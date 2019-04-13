/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fun_point_transform.c
#   Last Modified : 2019-04-13 09:01
#   Describe      : Use function point solution math;
#
# ====================================================*/

#include <stdio.h>
#include <math.h>

#define SIZE 20


void transform(double source[], double target[],
		int nmem, double (*pf)(double))
{
	for (int i = 0; i < nmem; ++i)
		target[i] = (*pf)(source[i]);

	return;
}

double square(double x)
{
	return (x * x);
}

double fact(double x)
{
	double total = 1.0;

	for (int i = 1; i <= x; ++i)
		total *= i;	

	return total;
}

int main(void)
{
	double source[SIZE], target[SIZE];

	for (int i = 0; i < SIZE; ++i)
		source[i] = i + 1;

	/* transform(source, target, SIZE, sin); */
	/* transform(source, target, SIZE, square); */
	transform(source, target, SIZE, fact);

	for (int j = 0; j < SIZE; ++j)
		printf("%5.2f --> %5.2f\n", source[j], target[j]);

	return 0;
}
