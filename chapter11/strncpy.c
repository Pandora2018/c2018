/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : strncpy.c
#   Last Modified : 2018-12-17 18:43
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char desc[6], src[10];
	
	puts("please input source string:");
	while (s_gets(src, 10)) {
		if (*src == '\0') break;

		strncopy(desc, src, 5);
		puts(desc);
		puts("please again input source string:");
	}

	return 0;
}
