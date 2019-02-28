/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : db_avg.c
#   Last Modified : 2019-02-28 18:30
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE * fpt = NULL;
	double v;
	double total = 0.0;
	int count = 0;

	mk_real();

	if (argc > 2) exit(3);
	
	if (1 == argc)
	{
		fpt = stdin;
	}
	else if (2 == argc)
	{
		if ((fpt = fopen(argv[1], "rt")) == NULL)
		{
			fprintf(stderr, "%s\n", "open file fail!");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "Usage %s [filename]\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	while (fscanf(fpt, "%lf", &v) == 1)
	{
		total += v;
		++count;
	}

	if (count)
	{
		printf("%d real number, average: %.2f\n",
			count, total / count);
	}
	else
	{
		fprintf(stdout, "%s\n", "There is no real number");
	}

	fclose(fpt);

	return 0;
}
