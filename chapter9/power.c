
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : power_num.c
#   Last Modified : 2018-11-02 19:35
#   Describe      : calc power
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "exercise.h"


int main(void)
{
	int exp;
	double base, result;

	printf("Please input two integer(eg:2,5):\n");

	while(scanf("%lf,%d", &base, &exp) == 2){

		result = power(base, exp);

		printf("%.2f^%d result is : %.8f\n", base, exp, result);

		printf("Please input two integer again(eg:2,5):\n");
	}

	printf("Done!\n");

	return 0;
}


double power(double base, int exp)
{
	double result = 1;

	if(0 == base && 0 == exp) return 0;

	if(base != 0 && 0 == exp) return 1;

	double temp = (exp > 0) ? base : 1.00 / base;

	for(int i = 0; i < abs(exp); i++)
		result *= temp;

	return result;
}
