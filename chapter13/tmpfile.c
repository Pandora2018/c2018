/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : tmpfile.c
#   Last Modified : 2019-02-23 11:57
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
	char * name = "book.list";

	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		fprintf(stderr, "%s", "open file failure!");
		exit(-1);
	}
	
	char * fname = tmpnam(name);
	printf("file name : %s", fname);

	if (fclose(fp) == EOF)
		fprintf(stderr, "%s\n", "close file failure");

	return 0;
}
