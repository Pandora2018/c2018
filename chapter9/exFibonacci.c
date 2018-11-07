
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : exFibonacci.c
#   Last Modified : 2018-11-03 17:45
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "exercise.h"


int main(void)
{
	int num;

	printf("Please input a integer to screen:");
	int stat = scanf("%d", &num);
	double value[num];

	if (1 == stat)
	{
		for (int n = 0; n < num; n++)
			value[n] = fbnacci(n + 1);
	}

	for (int index = 0; index < num; index++)
		printf("%dth fibonacci number : %.f\n", index + 1, value[index]);
		
	printf("Done!\n");

	return 0;
}
