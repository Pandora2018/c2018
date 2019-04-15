/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : conversion_letter.c
#   Last Modified : 2019-04-14 12:09
#   Describe      : Use bit operator conversion letter
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	unsigned char ch = 'a';
	const unsigned char MASK = 0x20;

	do
	{
		printf("%c ", ch ^ MASK);	// lower to upper
	} while (++ch <= 'z');

	putchar('\n');

	ch = 'A';
	do
	{
		printf("%c ", ch ^ MASK);	// upper to lower
	} while (++ch <= 'Z');

	putchar('\n');

	return 0;
}
