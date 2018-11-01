
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : locaddress.c
#   Last Modified : 2018-10-31 10:06
#   Describe      : & and * operator
#
# ====================================================*/

#include <stdio.h>

void interchange(int *, int *);

int main(void)
{
	/*
	 * sometime function can change other function varibale value,example called function must change calling function varibale value
	 */
	int a = 5, b = 10;

	printf("originally a = %d and b = %d\n", a, b);

	interchange(&a, &b);

	printf("Now a = %d and b = %d\n" ,a, b);

	/* double price = 3.00; */
	// double * ptr = &price;
	
	// printf("double * point use %zdByte\n", sizeof(ptr));
	
	/* printf("price = %.2f", *ptr) */;

	return 0;
}


void interchange(int * x, int * y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;

	return;
}
