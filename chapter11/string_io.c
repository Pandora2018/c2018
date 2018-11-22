
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
	char addend[] = "test string";

	puts("Enter string,please:");
	/*
	 * while (s_gets(desc, STLEN) != NULL){
	 *     // fputs(desc, stdout);
	 *     // putchar('\n');
	 *     int n = STLEN - strlen(desc) - 1;
	 *     strncat(desc, addend, n);
	 *     puts(desc);
	 *     puts("Enter string,please:");
	 * }
	 */


	/*
	 * scanf("%8s", desc);
	 * printf("%s\n", desc);
	 */

	return 0;
}
