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

	do
	{
		printf("%c ", ch & 0xDF);	// lower to upper
	} while (++ch <= 'z');

	putchar('\n');

	ch = 'A';
	do
	{
		printf("%c ", ch | 0x20);	// upper to lower
	} while (++ch <= 'Z');

	putchar('\n');

	return 0;
}
