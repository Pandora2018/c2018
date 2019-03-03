/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : file.c
#   Last Modified : 2019-03-03 11:15
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

void copy_file(const char *sour_file, const char *dest_file)
{
	char tmp[256];
	FILE *s_fp = NULL;
	FILE *d_fp = NULL;

	if ((s_fp = fopen(sour_file, "r"))  == NULL)
	{
		fprintf(stderr, "Source file : \"%s\" not exist\n",
				sour_file);
		exit(EXIT_FAILURE);
	}
	
	if ((d_fp = fopen(dest_file, "w"))  == NULL)
	{
		fprintf(stderr, "destination file : \"%s\" error\n",
				dest_file);
		exit(EXIT_FAILURE);
	}

	while (fgets(tmp, 256, s_fp) != NULL)
		fputs(tmp, d_fp);

	fclose(s_fp);
	fclose(d_fp);

	return;
}
