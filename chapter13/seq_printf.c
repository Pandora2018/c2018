/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : seq_printf.c
#   Last Modified : 2019-03-07 10:55
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	FILE *first_fp, *second_fp;
	first_fp = second_fp = NULL;

	if (argc != 3)
	{
		printf("The program must be 3 parameter\n");
		exit(EXIT_FAILURE);
	}

	if ((first_fp = fopen(argv[1] ,"r")) != NULL &&
			(second_fp = fopen(argv[2] ,"r")) != NULL)
	{
		seq_print(first_fp, second_fp);
	}
	else
	{
		printf("Open file eror\n");
		exit(EXIT_FAILURE);
	}

	fclose(first_fp);
	fclose(second_fp);

	return 0;
}
