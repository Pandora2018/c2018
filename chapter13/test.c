/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test.c
#   Last Modified : 2019-03-07 18:12
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	if ((fp = fopen("fseek.c", "r")) == NULL)
	{
		printf("open file error\n")	;
		return -1;
	}

	char str[256] = { 0 };

	for (int i = 1; i <= 3; ++i)
	{
		if (fgets(str, 256, fp) != NULL)
		{
			fputs(str, stdout);
		}
	}

	fclose(fp);

	return 0;
}
