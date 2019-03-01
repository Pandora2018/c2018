/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : file.c
#   Last Modified : 2019-03-01 11:00
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mk_real(void)
{
	FILE *fp = NULL;

	if ((fp = fopen("real_num.txt", "w")) == NULL)
		exit(EXIT_FAILURE);

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (3 == j)
				putc('.',fp);
			
			putc(rand() % 10 + '0', fp);
		}

		putc('\n', fp);
	}

	fclose(fp);

	return;
}

void mktext(void)
{
	FILE *fp = NULL;
	int num;

	if ((fp = fopen("document.txt", "w")) == NULL)
	{
		fprintf(stderr, "%s\n", "Open or creater file failure");
		exit(EXIT_FAILURE);
	}

	srand((unsigned int)time(NULL));

	for (int line = 0; line < 50; ++line)
	{
		num = rand() % 256;		// each line more than 256 character
		for (int c = 0; c < num; ++c)
		{
			putc(33 + rand() % 93, fp);
		}

		putc('\n', fp);
	}

	fclose(fp);

	return;
}
