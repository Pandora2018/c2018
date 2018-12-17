/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : is_within.c
#   Last Modified : 2018-12-17 13:18
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[100], ch;
	int res;

	puts("Please input string:");

	while (s_gets(test, 20)) {
		/* the newline is blankline,then skip */
		if (*test == '\0') break;

		puts("Please input check character:");
		scanf("%c", &ch);
		res = is_within(test, ch);
		
		printf("\'%c\' %s\n", ch, res ? "in the string" : "not in the string");

		/* skip to string end */
		while (getchar() != '\n')
			continue;

		puts("Please again input string:");
	}
	
	return 0;
}
