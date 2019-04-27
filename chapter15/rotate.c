/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : rotate.c
#   Last Modified : 2019-04-27 17:41
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "bit.h"

int main(void)
{
	unsigned int num, offset, res;

	printf("Enter number and offset : ");

	while (scanf("%u %u", &num, &offset) == 2)
	{
		/*
		 * if (num < 0 || offset < 0)
		 * {
		 *     printf("Again enter number and offset : ");
		 *     continue;
		 * }
		 */

		printf("number : ");
		to_bin(num);
		putchar('\n');
		
		res = rotate(num, offset);
		printf("res : ");
		to_bin(res);
		putchar('\n');

		printf("Again enter number and offset : ");
	}

	return 0;
}
