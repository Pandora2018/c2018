/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : exerise.c
#   Last Modified : 2019-05-06 09:01
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include "preproc.h"

void elect(const int *ar, int size, int sel)
{
	assert(size > 0);
	assert(sel > 0);

	int index;
	int *flag = (int *)calloc(size, sizeof(int));

	srand((unsigned long int)clock());

	for (int i = 0; i < sel; ++i)
	{
		index = rand() % size;
		assert(index >= 0);

		if (*(flag + index))
		{
			--i;
			continue;
		}

		printf("%d ", ar[index]);
		*(flag + index) = 1;
	}

	free(flag);

	return;
}

double * new_d_arr(int n, ...)
{
	assert(n > 0);

	double *res = (double *)malloc(n * sizeof(double));

	va_list ap;
	va_start(ap, n);

	for (int i = 0; i < n; ++i)
		*(res + i) = va_arg(ap, double);
	
	va_end(ap);

	return res;
}

void show_array(const double *ar, int n)
{
	assert(n > 0);

	for (int i = 0; i < n; ++i)
		printf("%-5.2f ", ar[i]);

	return;
}
