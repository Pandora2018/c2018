/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : struct.c
#   Last Modified : 2019-04-06 10:42
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include "struct.h"

unsigned int days_cnt(const char *mon)
{
	unsigned int total = 0;
	unsigned int m;
	
	for (int i = 0; i < 12; ++i)
	{
		if (strcmp(mon, list[i].abbr) == 0)
		{
			m = list[i].days;
			break;
		}
	}

	for (int j = 0; j < m; ++m)
		total += list[j].days;

	return total;
}
