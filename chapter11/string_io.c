
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
	/* char input[STLEN]; */
	const char * str[] = {
		"hello world", "hellgoods this",
		"hel djeijdie", "hydejidiede jiji",
		"hideihide hihih"
	};
	
	size_t n = sizeof(str) / sizeof(*str);

	for (int i = 0; i < n; i++) {
		if (strncmp(str[i], "he", 2) == 0)
			printf("Found : %s\n",*(str + i));
	}

	
		return 0;
}
