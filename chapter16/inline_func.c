/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : inline_func.c
#   Last Modified : 2019-04-30 10:31
#   Describe      : call function time more than execute funcion time, so we use inline funcion
#
# ====================================================*/

#include <stdio.h>
#include "preproc.h"

_Static_assert(sizeof(long double) == 2 * sizeof(double),
		"\"long double\" type not \"double\" twice!");

int main(void)
{
	int num;
	long double res;

	printf("Enter a number : ");

	while(scanf("%d", &num) == 1)
	{
		/* assert(num > 0); */

		res = fact(num);
		printf("res = %.7Lg\n", res);
		printf("Next number : ");
	}

	/*
	 * printf("inline funcion 'cube' address : %p\n", cube);
	 * printf("inline funcion 'fact' address : %p\n", fact);
	 */

	return 0;
}
