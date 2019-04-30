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

int main(void)
{
	double res = fact(130);

	printf("res = %.2g\n", res);

	/*
	 * printf("inline funcion 'cube' address : %p\n", cube);
	 * printf("inline funcion 'fact' address : %p\n", fact);
	 */

	// Generic programming
	/* short test = 'a'; */

	char test[] = "abc";

	printf("test : %#x\n", *(int *)test);

	int ans = *(int *)_Generic(test, char[3] : test + 1, unsigned int : test - 2, float : test - 1, default : test);

	printf("ans : %#x\n", ans);

	return 0;
}
