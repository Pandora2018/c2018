
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_io.c
#   Last Modified : 2018-11-19 18:47
#   Describe      : string input and output demo
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include "str.h"

int main(void)
{
	char desc[STLEN];

	puts("Enter string,please:");
	while (s_gets(desc, STLEN) != NULL){
		for (int i = 0; i < strlen(desc); i++){
			fputs(desc + i, stdout);
			putchar('\n');
		}
	}

	/*
	 * scanf("%8s", desc);
	 * printf("%s\n", desc);
	 */

	return 0;
}
