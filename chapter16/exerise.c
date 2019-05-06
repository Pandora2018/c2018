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
