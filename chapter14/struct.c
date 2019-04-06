/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : struct.c
#   Last Modified : 2019-04-06 14:38
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

unsigned int days_cnt(const char *mon)
{
	 unsigned int total = 0;
	 unsigned int m = 0;
	
	for (unsigned int i = 0; i < 12; ++i)
	{
		if (! strcmp(mon, list[i].abbr))
		{
			m = list[i].num;
			break;
		}
	}

	if (0 == m) 
	{
		fprintf(stdout, "%s\n", "You input month error!");
		exit(EXIT_FAILURE);
	}

	for (unsigned int j = 0; j < m; ++j)
		total += list[j].days;

	return total;
}
