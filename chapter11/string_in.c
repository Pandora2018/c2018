/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_in.c
#   Last Modified : 2018-12-20 09:06
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[50], find[20];

	puts("Please input string:");

	while (s_gets(test, 50) && *test != '\0') {
		puts("Please input find string:");
		s_gets(find, 20);
		printf("\'%s\' %s \'%s\'\n", find,
				string_in(test, find) ? "in the" : "not in the", test);

		puts("Please again input string:");
	}

	puts("Done!");

	return 0;
}
