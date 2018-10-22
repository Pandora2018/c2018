
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : prototype.c
#   Last Modified : 2018-10-22 16:44
#   Describe      : function prototype demo
#
# ====================================================*/

#include <stdio.h>

void calc(void);
/* int imax(int, int);  // old function declation */

int imax(int a, int b) { return (a > b ? a : b); }


int main(void)
{
	printf("The maximum of %d and %d is %d.\n", 3,5,imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3,5,imax(3.0,5.0));

	int a = imax(10, 20); // check function call statment is not equal function prototype?
	
	calc();

	return 0;
}


/* old function definite */
/* int imax(int n, int m)
{
	return (n > m ? n : m);
} */


void calc(void)
{
	return;
}
