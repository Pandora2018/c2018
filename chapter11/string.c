
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string.c
#   Last Modified : 2018-12-22 10:00
#   Describe      : about solution string function
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
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

char * string_in(char * str, char * find)
{
	int str_len, find_len;

	str_len = strlen(str);
	find_len = strlen(find);

	if (str_len >= find_len) {
		while (*str != '\0') {
			if (strncmp(str, find, find_len) == 0)
				return str;

			str++;
		}
	}

	return NULL;
}

void str_inversal(char * str)
{
	int len = strlen(str);
	char * end = str + len - 1;
	char tmp;

	do {
		tmp = *str;
		*str = *end;
		*end = tmp;
	} while (++str < --end);

	return;
}

void del_space(char * str)
{
	char * tmp, * ps = str;

	while (*ps) {
		if (isspace(*ps)) {
			tmp = ps;
			
			do {
				*tmp = *(tmp + 1);
			} while (*++tmp);

			/*
			 * while (*tmp) {
			 *     *tmp = *(tmp + 1);
			 *     tmp++;
			 * }
			 */
		}

		ps++;
	}

	return;
}

void str_ascii_order(int n, char * str[n])
{
	char * tmp;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(str[i], str[j]) < 0) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}

	return;
}

void str_len_order(int n, char * str[n])
{
	char * tmp;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strlen(str[i]) > strlen(str[j])) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}

	return;
}

int word_cnt(char * str)
{
	char ch;
	int cnt = 0;

	while (ch = *str++) {
		if (isspace(ch) && cnt == 0)
			continue;
		if (isspace(ch) && cnt != 0)
			break;
		if (!isspace(ch))
			cnt++;
	}

	return cnt;
}

void first_word_order(int n, char * str[n])
{
	char * tmp;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (word_cnt(str[i]) > word_cnt(str[j])) {
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
		}
	}

	return;
}

void meau(void)
{
	puts("----------------");
	puts("a -- Print String Array");
	puts("b -- ASCII Order Shouw");
	puts("c -- Length Order Show");
	puts("d -- Word Order Show");
	puts("q -- Quiet");
	puts("---------------");

	return;
}

void str_display(int n, char * str[n])
{
	for (int i = 0; i < n; i++)
		puts(str[i]);
}
