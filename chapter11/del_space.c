/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : del_space.c
#   Last Modified : 2018-12-21 19:24
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[50];

	puts("Please input string:");

	while (s_gets(test,50) && *test != '\0') {
		del_space(test);
		puts(test);
		puts("Please again input string:");
	}

	puts("Done!!!");

	return 0;
}
