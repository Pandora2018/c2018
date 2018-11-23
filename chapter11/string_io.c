
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
	char input[STLEN];

	// puts("Enter string,please:");
	puts("Enter a passwords,please:");
	while (s_gets(input, SIZE)) {
		if (strncmp(input, PASSWORDS, 5) == 0) {
			puts("Welcome to login system!");	
			printf("you input passwords : %s\n", input);
			break;
		} else {
			printf("you input passwords : %s, it's wrong\n", input);
			puts("you input passwords not right, please again input passwords:");
		}
	}

	/*
	 * scanf("%8s", desc);
	 * printf("%s\n", desc);
	 */

	return 0;
}
