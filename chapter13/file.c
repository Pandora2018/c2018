/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : file.c
#   Last Modified : 2019-03-11 14:04
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "file.h"

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

void cp_file(void)
{
	char fname[64];
	char dstfname[64];
	FILE *so_fp = NULL;
	FILE *dst_fp = NULL;

	puts("Please input copy file name");
	scanf("%s", fname);

	int i;
	char *pos = NULL;
	// get copy file name
	if (strchr(fname, '.'))
	{
		for (i = 0, pos = fname; *pos != '.';
				++pos, ++i)
		{
			dstfname[i] = *pos;
		}	
	}
	else
	{
		printf("File name must be '.' sepreation\n");
		exit(EXIT_FAILURE);
	}

	strcat(dstfname, ".bak");

	pos = NULL;

	if ((so_fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "%s open fail!\n", fname);
		exit(EXIT_FAILURE);
	}
	
	if ((dst_fp = fopen(dstfname, "w")) == NULL)
	{
		fprintf(stderr, "%s open fail!\n", dstfname);
		exit(EXIT_FAILURE);
	}

	char ch;
	
	while ((ch = getc(so_fp)) != EOF)
	{
		if (isalpha(ch))
			putc(toupper(ch), dst_fp);
		else
			putc(ch, dst_fp);
	}

	fclose(so_fp);
	fclose(dst_fp);

	return;
}

void seq_print(FILE *first_file, FILE *sec_file)
{
	char first_file_content[256] = { 0 };
	char sec_file_content[256] = { 0 };
	char *find = NULL;

	while ((feof(first_file)) == 0 || (feof(sec_file)) == 0)
	{
/*
 *         if (fgets(first_file_content, 256, first_file) != NULL)
 *         {
 *             fputs(first_file_content, stdout);
 *         }
 * 
 *         if (fgets(sec_file_content, 256, sec_file) != NULL)
 *         {
 *             fputs(sec_file_content, stdout);
 *         }
 */

		if (fgets(first_file_content, 256, first_file) &&
				fgets(sec_file_content, 256, sec_file))
		{
			find = strchr(first_file_content, '\n');
			
			if (NULL != find)
				*find = '\0';

			strcat(first_file_content, sec_file_content);
			
			printf("%s\n", first_file_content);
		}
	}

	find = NULL;

	return;
}

long int report_char(char ch, FILE *fp)
{
	long int count = 0;
	char read_ch = 0;
	
	while (feof(fp) == 0)
	{
		read_ch = getc(fp);
		
		if (read_ch == ch)
			++count;
	}

	return count;
}

char *show_file(long int pos, FILE *fp)
{
	char str[256] = { 0 };
	char *ch = str;

	fseek(fp, 0L, SEEK_END);
	long int end = ftell(fp);

	fseek(fp, 0L, SEEK_SET);
	long int start = ftell(fp);

	/* file size */
	long int size = end - start;
	printf("size : %ld\n", size);
	printf("======================\n");
	
	if (pos >= 0 && pos <= size)
		fseek(fp, pos, SEEK_SET);
	else
	{
		printf("You give postion more than file size!\n");
		exit(EXIT_FAILURE);
	}
	
	if (fgets(str, 256, fp) != NULL)
		return ch;
	else
		exit(EXIT_FAILURE);
}
