/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_err.c
#   Last Modified : 2019-05-25 17:42
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
	for (int i = 0; i < 256; ++i)
	{
		/* printf("Error %d : %s\n", i, strerror(i)); */
		;
	}

	extern int errno;

	errno = 0;
	
	FILE *fp = fopen("test.c", "r");

	if (fp == NULL)
	{
		fprintf(stderr, "error %d : %s\n", errno, strerror(errno));
	} else
	{
		fclose(fp);
	}

	/* perror("test.c"); */

	return 0;
}
