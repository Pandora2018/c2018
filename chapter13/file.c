/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : file.c
#   Last Modified : 2019-02-28 18:19
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
