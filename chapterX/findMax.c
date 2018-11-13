
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : findMax.c
#   Last Modified : 2018-11-13 20:03
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int test[] = {-12, -23, 34, 1000, -45, 5, 875, 234, 400, -300};
	size_t size = sizeof(test) / sizeof(test[0]);
	
	int large = max(test, size);
	int postion = max_loc(test, size);
	printf("The \'test\' array maxium value is %d,postion is %d\n", large, postion);

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
