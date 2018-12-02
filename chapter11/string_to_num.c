
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_to_num.c
#   Last Modified : 2018-12-02 10:15
#   Describe      : string conversion numeric
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	double num = atof(argv[1]);

	// printf("%s conversion to numeric : %f\n", argv[1], num);
	
	double n = strtod(argv[1], NULL);

	// printf("%s conversion to numeric : %f\n", argv[1], n);
	
	char format_str[20];
	int cnt = sprintf(format_str, "%s has %ld apple\n", argv[1], strtol(argv[2], NULL, 10));

	/*
	 * printf("format_str has %d character\n", cnt);
	 * fputs(format_str, stdout);
	 */

	char * end;

	long int l_num = strtol(argv[1], &end, 10);
	printf("%s conversion to numeric : %ld\n", argv[1], l_num);
	printf("left character : %s", end);
	// fputs(end, stdout);

	return 0;
}
