/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : list_file.c
#   Last Modified : 2019-03-05 10:43
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	char ch;

	for (int i = 1; i <= argc - 1; ++i)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "%s open fail\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		
		printf("------ %s file ---------\n", argv[i]);
		while ((ch = getc(fp)) != EOF)
		{
			putc(ch, stdout);
		}

		fclose(fp);
	}

	printf("List file over!\n");

	return 0;
}
