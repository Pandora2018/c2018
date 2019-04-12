/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fun_point_menu.c
#   Last Modified : 2019-04-12 19:03
#   Describe      : Use funtion point array implete menu
#
# ====================================================*/

#include <stdio.h>
#include <string.h>

void func_a(void)
{
	printf("A menu\n");

	return;
}

void func_b(void)
{
	printf("B menu\n");

	return;
}

void func_c(void)
{
	printf("C menu\n");

	return;
}

int main(void)
{
	void (* pf[])(void) = {func_a, func_b, func_c};
	char choice;

	printf("Enter choice (q to quite):");

	while (scanf("%c", &choice) == 1 && choice != 'q')
	{
		if (strchr("abc", choice))
			switch (choice)
			{
				case 'a' : (*pf)(); break;
				case 'b' : (*(pf + 1))(); break;
				case 'c' : (*(pf + 2))(); break;
				default : break;
			}
		else
			printf("Enter a or b or c:\n");

		while (getchar() != '\n') continue;

		puts("-------------------");
		printf("Enter next choice (q to quite) :");
	}

	puts("Finish!");

/*
 *     int size = (char *)func_c - (char *)func_b;
 * 
 *     printf("size = %d\n", size);
 */

	return 0;
}
