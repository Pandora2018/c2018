
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string.c
#   Last Modified : 2018-11-20 08:56
#   Describe      : about solution string function
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "str.h"

// string input
char * s_gets(char * str, int n)
{
	char * ret_val;
	int i;

	ret_val = fgets(str, n, stdin);

	if (ret_val){
		i = 0;
		
		while (str[i] != '\n' && str[i] != '\0')
			i++;

		if (str[i] == '\n')
			str[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}

void take_s(char * pc, int n)
{
	char ch;
	int i = 0;

	while (i < n && (ch = getchar()) != EOF) {
		if (isspace(ch)) {
			pc[i] = '\0';
			break;
		}
		
		pc[i] = ch;
		++i;
	}
	
	pc[i] = '\0';

	return;
}

char * take_word(char * word)
{
	char ch;
	int i = 0;

	while ((ch = getchar()) != '\n') {
		if (isdigit(ch))
			return NULL;

		if (!isspace(ch))
			word[i++] = ch;
		else
			break;
	}

	word[i] = '\0';

	return word;
}

char * find_ch(char * str, char ch)
{
	char * pc = str;
	bool flag = false;

	while (*pc) {
		if (*pc != ch)
			pc++;
		else {
			flag = true;
			break;
		}
	}

	return (flag ? pc : NULL);
}

int is_within(char * str, char ch)
{
	while (*str != '\0' && *str != ch)
		str++;

	return *str;
}

char * strncopy(char * desc, char * src, int n)
{
	for (int i = 0; i < n; i++)
		*desc++ = *src++;

	*desc = '\0';

	return desc;
}
