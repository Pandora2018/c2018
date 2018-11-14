
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fd_max_min.c
#   Last Modified : 2018-11-14 08:16
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int test[] = {-12, -23, 34, 1000, -45, 5, -345, 875, 234, 400, -300};
	size_t size = sizeof(test) / sizeof(test[0]);
	
	// value[0] save as minxium,value[1] save as minxium postion
	int minValue[2] = {0};

	int large = max(test, size);
	int postion = max_loc(test, size);
	
	min_and_postion(test, minValue, size);
	
	printf("The \'test\' array maxium value is %d,postion is %d\n", large, postion);
	printf("The \'test\' array minxium value is %d,postion is %d\n", minValue[0], minValue[1]);

	return 0;
}


int max(const int ar[], int size)
{
	int maxium = ar[0];

	for (int index = 1; index < size; index++)
	{
		if (ar[index] > maxium)
			maxium = ar[index];
	}

	return maxium;
}


void min_and_postion(const int * ar, int * value, int size)
{
	int postion = 1, minxium = *ar;

	for (int index = 1; index < size; index++)
	{
		if (*(ar + index) < minxium)
		{
			minxium = *(ar + index);
			postion = index + 1;	
		}
	}

	*value = minxium;
	*(value + 1) = postion;

	return;
}


int max_loc(const int ar[], int size)
{
	int postion = 1;
	int maxium = ar[0];
	
	for (int i = 1; i < size; i++)
	{
		if (ar[i] > maxium)
		{
			maxium = ar[i];
			postion = i + 1;
		}
	}

	return postion;
}
