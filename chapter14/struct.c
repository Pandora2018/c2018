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
#include <time.h>
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

double diff_date(struct day *start, struct day *end)
{
	const char *abbr[] = 
	{
		"Jan", "Feb", "Mar", "Apr", 
		"May", "Jun", "Jul", "Aug", 
		"Sep", "Oct", "Nov", "Dec"
	};

	const char *full_month[] = 
	{	
		"January", "February", "March", "April", 
		"May", "June", "July", "August", 
		"September", "October", "November", "December"
	};

	unsigned char start_month, end_month;

	for (int i = 1; i < 12; ++i)
	{
		if (! strcmp(start->abbr_month, abbr[i]) ||
				! strcmp(start->full_month, full_month[i]))
		{
			start_month = i;
		}

		if (! strcmp(end->abbr_month, abbr[i]) ||
				! strcmp(end->full_month, full_month[i]))
		{
			end_month = i;
		}
	}

	struct tm begin = {.tm_year = (start->year), .tm_mon = start_month, .tm_mday = (start->mday)};
	struct tm finish = {.tm_year = (end->year), .tm_mon = end_month, .tm_mday = (end->mday)};

	/* double total = difftime(finish, begin) / 86400; */
	double total = 0;

	return total;
}
