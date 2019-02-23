/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fseek.c
#   Last Modified : 2019-02-23 11:46
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;

	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		fprintf(stderr, "%s", "open file failure!");
		exit(-1);
	}

	while (! feof(fp))
	{
		ch = getc(fp);
		putc(ch, stdout);
	}

	/* rewind(fp); */
	fseek(fp, 8, SEEK_SET);
	printf("file postion : %ld\n", ftell(fp));

	while (! feof(fp))
	{
		ch = getc(fp);
		putc(ch, stdout);
	}

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
