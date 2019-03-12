/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : show_file.c
#   Last Modified : 2019-03-12 14:34
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>
#include "file.h"

int main(void)
{
	FILE *fp = NULL;
	char name[64] = { 0 };
	char *str = NULL;
	long int pos;	// file postion

	puts("Enter File Name:");
	fscanf(stdin, "%s", name);

	if ((fp = fopen(name, "r")) != NULL)
	{
		printf("enter a file postion:\n");

		while (fscanf(stdin, "%ld", &pos) == 1 &&
				pos >= 0)
		{
			str = show_file(pos, fp);
			printf("%s\n", str);
			printf("enter next file postion:\n");
		}
		printf("You give number was woring,so program will finish!\n");
	}
	else
	{
		printf("%s file open failure\n", name);
	}

	fclose(fp);
	fp = NULL;
	str = NULL;

	return 0;
}
