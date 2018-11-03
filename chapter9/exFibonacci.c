
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
	double value;

	printf("Please input a integer to screen:");

	while(scanf("%d", &num) == 1){
		value = fbnacci(num);
		printf("%dth fibonacci number : %.0f\n", num, value);
		printf("-----------------------------\n");
		printf("Please input a integer again:");
	}

	printf("Done!\n");

	return 0;
}
