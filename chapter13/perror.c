/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : perror.c
#   Last Modified : 2019-02-23 12:39
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	if ((fp = fopen("file", "r")) == NULL)
	{
		perror("file open failure");
		exit(-1);
	}

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
