/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : complement.c
#   Last Modified : 2019-04-15 14:50
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter number:");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		printf("%-6d", (~ i) + 01);

		if ( i % 5 == 0 )
			putchar('\n');

	}

	return 0;
}
