/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : find_in_line.c
#   Last Modified : 2019-03-01 11:01
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	
	mktext();

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s [character] [filename]\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (strlen(argv[1]) != 1)
		{
			fprintf(stderr, "The second parameter need a character\n");
			exit(EXIT_FAILURE);
		}

		if ((fp = fopen("document.txt", "r")) == NULL)
		{
			fprintf(stderr, "%s opne fail\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	/* char ch = argv[1][0]; */
	char ch = **(argv + 1);
	char str[256];

	while (fgets(str, 256, fp) != NULL)
	{
		if (strchr(str, ch))
			puts(str);
	}

	fclose(fp);

	return 0;
}
