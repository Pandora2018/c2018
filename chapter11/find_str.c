/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : find_str.c
#   Last Modified : 2018-12-16 18:53
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char * str = "this is apple";
	char ch = 'a';

	char * find_pc = find_ch(str, ch);
	if (find_pc)
		printf("find character %c\n", ch);
	else
		printf("not find character \'%c\'\n", ch);

	return 0;
}
