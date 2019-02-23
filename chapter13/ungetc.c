/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : ungetc.c
#   Last Modified : 2019-02-23 12:05
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char str[100];
	int ch;

	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		fprintf(stderr, "%s", "open file failure!");
		exit(-1);
	}

	ch = getc(fp);
	printf("postion : %ld\n", ftell(fp));
	char c = ungetc(ch, fp);
	printf("back character : %c,postion : %ld\n", c, ftell(fp));
	
	while (! feof(fp))
	{
		ch = getc(fp);

		if ('t' == ch)
			ungetc('+', fp);
		else
			ungetc(ch, fp);

		fread(str, 30, 1, fp);
		printf("%s\n", str);
	}

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
