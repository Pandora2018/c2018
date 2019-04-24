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
