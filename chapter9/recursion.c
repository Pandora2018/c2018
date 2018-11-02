
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : recursion.c
#   Last Modified : 2018-11-02 10:13
#   Describe      : recursion demo
#
# ====================================================*/

#include <stdio.h>
#include "recursion.h"

int main(void)
{
	printf("my name is %s,I'm %d years old\n", NAME, AGE);
	/* up_and_down(1); */
	printf("10th fibonacci:%.f\n", fibonacci(10));

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
