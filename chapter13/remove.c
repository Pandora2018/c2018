/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : remove.c
#   Last Modified : 2019-02-23 11:51
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	int ch;

	if ((fp = fopen("del", "r")) == NULL)
	{
		fprintf(stderr, "%s", "open file failure!");
		exit(-1);
	}

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	if (remove("del") == 0)
		printf("del successfull\n");
	else
		printf("del file failure\n");

	return 0;
}
