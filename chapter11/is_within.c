/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : is_within.c
#   Last Modified : 2018-12-18 08:58
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[20], ch = 'r';
	int res;

	puts("Please input string:");

	while (s_gets(test, 20)) {
		/* the newline is blankline,then skip */
		if (*test == '\0') break;
	
		res = is_within(test, ch);
		
		printf("\'%c\' %s\n", ch, res ? "in the string" : "not in the string");

		puts("Please again input string:");
	}

	puts("Done!");
	
	return 0;
}
