/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : enumerator.c
#   Last Modified : 2019-03-31 09:54
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "enumerator.h"

int main(void)
{
	int week;

	printf("Enter a day:\n");
	scanf("%d", &week);

	switch ((enum day)week)
	{
		case MON:
			printf("today is monday\n");
			break;
		case TUE:
			printf("today is tuesday\n");
			break;
		case WED:
			printf("today is wednesday\n");
			break;
		case THU:
			printf("today is thuesday\n");
			break;
		case FRI:
			printf("today is friday\n");
			break;
		case SAT:
			printf("today is sataday\n");
			break;
		case SUN:
			printf("today is sunday\n");
			break;
		default:
			break;
	}

	return 0;
}
