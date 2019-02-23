/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : feof.c
#   Last Modified : 2019-02-23 11:27
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	/* char st[100]; */
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


	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
