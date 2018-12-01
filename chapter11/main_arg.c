
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : main_arg.c
#   Last Modified : 2018-12-01 11:03
#   Describe      : from commend line get string as main function argument
#
# ====================================================*/

#include <stdio.h>

int main(int argc, char * argv[])
{
	int cnt;

	printf("The program name : %s, it has %d argument.\n", argv[0], argc - 1);

	for (cnt = 1; cnt < argc; cnt++)
		printf("%s ", argv[cnt]);

	return 0;
}
