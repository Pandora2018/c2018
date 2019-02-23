/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fread.c
#   Last Modified : 2019-02-23 11:28
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	char st[100];
	int i = 100;

	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		fprintf(stderr, "%s", "open file failure!");
		exit(-1);
	}

	/* fwrite(&i, sizeof(int), 1, fp); */

	fread(st, 1, 50, fp);

	fprintf(stdout, "%s", st);

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
