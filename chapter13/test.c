/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test.c
#   Last Modified : 2019-02-28 18:09
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 10; ++i)
	{
		fprintf(stdout, "%c\n", i + '0');
	}

	return 0;
}
