
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : point_op.c
#   Last Modified : 2018-11-06 10:03
#   Describe      :
#
# ====================================================*/

#include <stdio.h>


int main(void)
{
	float dates[2] = {2.0, 1.0};
	float moredates[3] = {3.0, 4.0, 5.0};
	
	float * p1, * p2, * p3;
	p1 = p2 = dates;
	p3 = moredates;

	printf("Before:\n*p1 = %.1f, *p2 = %.1f, *p3 = %.1f\n", *p1, *p2, *p3);
	printf("after:\n*p1++ = %.1f, *(++p2) = %.1f, ++(*p3) = %.1f\n", *p1++, *(++p2), ++(*p3));
	printf("*p1 = %.1f, *p2 = %.1f, *p3 = %.1f\n", *p1, *p2, *p3);

	return 0;
}
