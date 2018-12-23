/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_info.c
#   Last Modified : 2018-12-23 13:10
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[50];
	
	puts("Please Input String:");
	while (s_gets(test, 50) && *test != '\0') {
		string_info(test);
		puts("Please Again Input String:");
	}

	return 0;
}
