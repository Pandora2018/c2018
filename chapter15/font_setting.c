/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : font_setting.c
#   Last Modified : 2019-04-28 08:40
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bit.h"

int main(void)
{
	_Alignas(char) font def_font = {10, 8, 1, 0, 1, 0};

	show_font(&def_font);
	putchar('\n');

	menu();
	
	char chooice;
	printf("You chooice : ");
	
	while (scanf("%c", &chooice) == 1)
	{

		if (! strchr("dsabiuq", chooice))
		{
			printf("Please character form menu : ");
			getchar();
			continue;
		}

		switch (chooice)
		{
			case 'd': chg_id(&def_font); break;
			case 's': chg_size(&def_font); break;
			case 'a': chg_alig(&def_font); break;
			case 'b': chg_bold(&def_font); break;
			case 'i': chg_italic(&def_font); break;
			case 'u': chg_underline(&def_font); break;
			case 'q': 
				printf("Program exit!\n");
				putchar('\n');
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("Unkown chooice\n");
				break;
		}

		putchar('\n');
		show_font(&def_font);
		putchar('\n');
		menu();

		getchar();	// delete \n from input buffer
		printf("Again enter You chooice : ");
	}

	return 0;
}
