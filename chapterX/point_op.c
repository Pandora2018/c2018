
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
	/* float dates[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0}; */
	const char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	char c[] = {'A', 'B', 'C', 'D'};
	char * const cptr1 = c;

	/* *cptr1 = 'A'; */
	*(cptr1 + 2) = 'c';
	/* cptr1++; */

	printf("ch = %c\n", *(cptr1 + 2));

	return 0;
}
