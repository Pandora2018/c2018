/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : gcd_demo.c
#   Last Modified : 2020-05-23 10:21
#   Describe      :
#
# ====================================================*/


#include <stdio.h>

int gcd_simple(unsigned int a, unsigned int b)
{
	unsigned int max_gcd;
	unsigned int min = (a < b ? a : b);

	for (unsigned int i = 1; i <= min; ++i)
	{
		if (a % i == 0 && b % i == 0)
			max_gcd = i;
	}

	return max_gcd;
}

unsigned int gcd_recursion(unsigned int a, unsigned b)
{
	/* Using Euclidean Algorithem 
	 * calculator greatest common divisor
	 * of two integer a and b */

	if (0 == a)
		return b;
	else if (0 == b)
		return a;
	else
		return gcd_recursion(b, a % b);
}


int main(void)
{
	unsigned int a, b;

	printf("PLease input two unsigned int:");
	scanf("%u%u", &a, &b);

	/* unsigned int max_gcd = gcd_simple(a ,b); */
	unsigned int max_gcd = gcd_recursion(a ,b);

	printf("%u and %u greatest common divisor is %u\n",
			a, b, max_gcd);

	return 0;
}
