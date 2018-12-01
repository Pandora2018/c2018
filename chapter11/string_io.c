
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_io.c
#   Last Modified : 2018-12-01 11:44
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

	fputs("Blow enter a string:\n", stdout);

	char name[20];
	char * find;
	char * p = name;

	fgets(name, 100, stdin);
	find = strchr(name, '\n');

	if (*find)
		*find = '\0';
	
	while (*p != '\0')
		printf("%c", *p++);
	
		return 0;
}
