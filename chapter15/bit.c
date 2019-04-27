/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit.c
#   Last Modified : 2019-04-24 10:35
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <math.h>

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
