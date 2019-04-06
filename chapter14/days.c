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
#include "struct.h"

int main(void)
{
	char month[4] = { 0 };

	printf("Enter month:\n");
	fscanf(stdin, "%s", month);

	int total = days_cnt(month);

	printf("The first month to %s has %u days\n",
			month, total);

	return 0;
}
