
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : point.c
#   Last Modified : 2018-11-02 09:43
#   Describe      : & and * operator
#
# ====================================================*/

#include <stdio.h>

void interchange(int *, int *);

int main(void)
{
	/* int a = 5, b = 10;

	printf("originally a = %d and b = %d\n", a, b);

	interchange(&a, &b);

	printf("Now a = %d and b = %d\n" ,a, b); */

	double price = 3.00;
	double * ptr = &price;
	
	printf("double * point use %zdByte\n", sizeof(ptr));
	
	printf("price = %.2f\n", *ptr);
	
	printf("price varibale address in the memory : %p", ptr);

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
