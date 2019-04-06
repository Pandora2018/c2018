/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : days.c
#   Last Modified : 2019-04-06 10:36
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

unsigned int days_cnt(const char *mon);

int main(void)
{
	char month[4] = { 0 };

	/*
	 * printf("Enter month:\n");
	 * fscanf(stdin, "%s", month);
	 */

	unsigned int total = days_cnt("Dec");

	printf("The first month to %s has %u days\n",
			month, total);

	return 0;
}
