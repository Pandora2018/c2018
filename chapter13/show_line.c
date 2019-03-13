/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : show_line.c
#   Last Modified : 2019-03-13 09:12
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	long int num = 0;

	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "[%s] file open failure\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if (3 == argc)
	{
		num = show_line(argv[1], fp);

		if (num == 0)
		{
			printf("[%s] file not \"%s\" string\n", 
					argv[2], argv[1]);
		}
	}
	else
	{
		printf("The program use error\n");
	}

	fclose(fp);
	fp = NULL;

	return 0;
}
