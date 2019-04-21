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

	/*
	 * unsigned char a, b, c, d;
	 * int x = 0x12345678;
	 * 
	 * a = x & 0xff;
	 * x >>= 8;
	 * b = x & 0xff;
	 * x >>= 8;
	 * c = x & 0xff;
	 * x >>= 8;
	 * d = x & 0xff;
	 */
	/* x >>= 8; */

	/*
	 * printf("%hhx, %hhx, %hhx, %hhx\n", a, b, c, d);
	 * printf("x = %x\n", x);
	 */

	unsigned int d = 0xdea;
	const unsigned int MASK	= 0x4;

	if ((d & MASK) == MASK)
		printf("variable 'd' third bit is '1'\n");
	else
		printf("variable 'd' third bit not is '1'\n");

	return 0;
}
