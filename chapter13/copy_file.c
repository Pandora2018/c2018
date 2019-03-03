/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : copy_file.c
#   Last Modified : 2019-03-03 11:16
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "file.h"

int main(int argc, char *argv[])
{
	if (1 == argc)
	{
		fprintf(stderr, "Not source file and destination file\n");
		exit(EXIT_FAILURE);
	}
	
	if (2 == argc)
	{
		fprintf(stderr, "Not destination file\n");
		exit(EXIT_FAILURE);
	}

	copy_file(argv[1], argv[2]);

	printf("copy file finish!\n");
	
	return 0;
}
