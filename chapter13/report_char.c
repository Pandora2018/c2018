/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : report_char.c
#   Last Modified : 2019-03-11 14:04
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	long int res = 0;
	char ch = **(argv +1);

	if (1 == argc)
	{
		fprintf(stderr, "Usage : [character] [file...]\n");
		exit(-1);
	}
	else if (2 == argc)
	{
		res = report_char(ch, stdin);
		printf("\'%c\' character number from stdard input : %ld\n",
				ch, res);
		printf("===========================\n");
	}
	else if (argc > 2)
	{
		for (int i = 2; i < argc; ++i)
		{
			if ((fp = fopen(argv[i], "r")) != NULL)
			{
				res = report_char(ch, fp);
				printf("The %d file ", i - 1);
				printf("\'%c\' character number from [%s] : %ld\n",
						ch, argv[i], res);
				res = 0;
				fclose(fp);
			}
			else
			{
				printf("Open [%s] Failure, %s\n", argv[i],
						i < argc - 1 ? "Open Next File" : "END");
			}

			printf("===========================\n");
		}
	}
	
	fp = NULL;

	return 0;
}
