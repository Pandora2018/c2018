/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : diff_date.c
#   Last Modified : 2019-04-07 13:15
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "struct.h"

unsigned int diff_date(struct day *start, struct day *end);

int main(void)
{
	struct day begin, finish;

	printf("Enter Start Year:");
	fscanf(stdin, "%u", &begin.year);
	printf("Enter End Year:");
	fscanf(stdin, "%u", &finish.year);

	printf("1) month id;\t2) abbr_month;\t3) full_month\n");
	
	unsigned char status;
	
	printf("Enter you choice:");
	fscanf(stdin, "%hhu", &status);

	switch (status)
	{
		case 1 :
			printf("Enter Start Month_id:");
			fscanf(stdin, "%hhu", &begin.month_id);
			printf("Enter End Month_id:");
			fscanf(stdin, "%hhu", &finish.month_id);
			break;
		case 2 :
			printf("Enter Start abbr_month:");
			fscanf(stdin, "%s", begin.abbr_month);
			printf("Enter End abbr_month:");
			fscanf(stdin, "%hhu", finish.abbr_month);
			break;
		case 3 :
			printf("Enter Start full_month:");
			fscanf(stdin, "%s", begin.full_month);
			printf("Enter End full_month:");
			fscanf(stdin, "%hhu", finish.full_month);
			break;
		default:
			break;
	}

	printf("Enter Begin Day:");
	fscanf(stdin, "%hhu", &begin.mday);
	printf("Enter Finish Day:");
	fscanf(stdin, "%hhu", &finish.mday);

	double cnt_day = diff_date(&begin, &finish);

	printf("%.f days\n", cnt_day);

	return 0;
}
