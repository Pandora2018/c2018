
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : exerise.c
#   Last Modified : 2018-10-09 12:59
#   Describe      : this is chapter8 exerise
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void charcnt(void);
void avg_char(void);

int main(void)
{
	// charcnt();
	avg_char();

	return 0;
}


void charcnt(void)
{
	int ch;
	int count = 0;

	printf("Please input s string:\n");

	while ((ch = getchar()) != EOF)
			count++;
	
	printf("you input string have %d character\n", count);
}


void avg_char(void)
{
	int ch;
	int char_cnt, word_cnt;
	bool isword = true;

	char_cnt = word_cnt = 0;
	
	printf("enter string:\n");

	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
			char_cnt++;

		if (! isspace(ch) && isword)
		{
			word_cnt++;
			isword = false;
		}else 

		if (isspace(ch) && !isword)
			isword = true;
	}

	printf("word count : %d\n", word_cnt);
	printf("char count : %d\n", char_cnt);
	printf("each word average length: %.2f\n", 1.0 * char_cnt / word_cnt);
}
