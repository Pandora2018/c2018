/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_menu.c
#   Last Modified : 2018-12-22 10:50
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	int num;
	char ch;
	
	puts("Enter a Integet:");
	scanf("%d", &num);

	while (getchar() != '\n')
		continue;

	char * test[num];
	char string[num][50];

	printf("Enter %d String:\n", num);
	for (int i = 0; i < num; i++)
		test[i] = s_gets(string[i], 50);

	while (1) {
		meau();

		puts("Select You Choose:");
		scanf("%c", &ch);

		switch (ch) {
			case 'a': 
				str_display(num, test);
				break;
			case 'b':
				str_ascii_order(num, test);
				str_display(num, test);
				break;
			case 'c':
				str_len_order(num, test);
				str_display(num, test);
				break;
			case 'd':
				first_word_order(num, test);
				str_display(num, test);
				break;
			case 'q':
				puts("Program Finish!");
				return 0;
			default:
				break;
		}

		while (getchar() != '\n')
			continue;
	}

	return 0;
}
