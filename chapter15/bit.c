/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit.c
#   Last Modified : 2019-04-27 17:41
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int bin_to_dec(const char *sbin)
{
	int res = 0;
	int len = strlen(sbin);
	int tmp[len];

	for (int i = 0; i < len; ++i)
		tmp[i] = sbin[i] - '0';

	int e = 0;
	for (int j = len - 1; j >= 0; --j, ++e)
		res += tmp[j] * pow(2, e);

	return res;
}

void bit_and(const char *s1, const char *s2)
{
	for (int j = 0; j < strlen(s1); ++j)
	{
		if (s1[j] == '1' && s2[j] == '1')
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_or(const char *s1, const char *s2)
{
	for (int i = 0; i < strlen(s1); ++i)
	{
		if (s1[i] == '1' || s2[i] == '1')
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_xor(const char *s1, const char *s2)
{
	for (int i = 0; i < strlen(s1); ++i)
	{
		if (s1[i] != s2[i])
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_not(const char *s)
{
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] == '1')
			printf("0");
		else
			printf("1");
	}

	return;
}

unsigned int rotate(unsigned int num, unsigned int offset)
{
	int mask;

	for (int i = 1; i <= offset; ++i)
	{
		mask = (num & 0x80) >> 7;
		num <<= 1;
		num ^= mask;
	}

	return num;
}

void to_bin(int num)
{
	for (int i = 1; i <= CHAR_BIT; ++i)
	{
		if (num & 0x80)
			putchar('1');
		else
			putchar('0');

		num <<= 1;

		if (i % 4 == 0)
			putchar(' ');
	}

	return;
}
