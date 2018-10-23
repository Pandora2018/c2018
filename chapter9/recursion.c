
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : recursion.c
#   Last Modified : 2018-10-23 12:21
#   Describe      : recursion demo
#
# ====================================================*/

#include <stdio.h>

void up_and_down(int);


int main(void)
{
	up_and_down(1);

	return 0;
}


void up_and_down(int n)
{
	printf("level %d : n location %p\n", n, &n);
	
	if (n < 4)
		up_and_down(n + 1);

	printf("level %d : n location %p\n", n, &n);

	return;
}
