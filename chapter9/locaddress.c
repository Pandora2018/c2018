
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

void locadd(double);
void interchange(int, int);

int main(void)
{
	// double d1, d2;
	// d1 = 1.00;
	// d2 = 2.00;

	// printf("in main() d1 = %f, d1 address :%p\n", d1, &d1);
	// printf("in main() d2 = %f, d2 address :%p\n", d2, &d2);

	// locadd(d1);

	/*
	 * sometime function can change other function varibale value,example called function must change calling function varibale value
	 */
	int a = 5, b = 10;

	printf("originally a = %d and b = %d\n", a, b);

	interchange(a, b);

	printf("Now a = %d and b = %d\n" ,a, b);

	printf("-----\n");
	printf("main() address %p, locadd() addredd %p,interchange() address %p\n", &main, &locadd, &interchange);

	return 0;
}


void locadd(double d1)
{
	double d2 = 2.00;

	printf("in locadd() d1 = %f, d1 address :%p\n", d1, &d1);
	printf("in locadd() d2 = %f, d2 address :%p\n", d2, &d2);

	return;
}


void interchange(int x, int y)
{
	int tmp;
	printf("Originally x = %d and y = %d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("Now x = %d and y = %d\n", x, y);

	return;
}
