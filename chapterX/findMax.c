
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : findMax.c
#   Last Modified : 2018-11-13 12:45
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int test[] = {-12, -23, -13, 34, -45, 54, 100, 200, -300};
	size_t size = sizeof(test) / sizeof(test[0]);
	
	int large = max(test, size);
	printf("test[%zd] = {-12, -23, -13, 34, -45, 54, 100, 200, -300}\n", size);
	printf("The \'test\' array maxium value is %d\n", large);

	return 0;
}


int max(int ar[], int size)
{
	int maxium = ar[0];

	for (int index = 1; index < size; index++)
	{
		if (ar[index] > maxium)
			maxium = ar[index];
	}

	return maxium;
}
