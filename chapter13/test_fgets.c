/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_fgets.c
#   Last Modified : 2020-02-28 16:34
#   Describe      :
#
# ====================================================*/


#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
	char str[100];

	printf("inputs string : ");
	fgets(str, 80, stdin);

	printf("%s", str);

	return 0;
}
