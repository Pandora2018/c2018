
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : eof.c
#   Last Modified : 2018-10-04 10:42
#   Describe      : EOF meaning to "end of file"
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			cnt++;

		// putchar(ch);
	}

	// printf("------\n");
	printf("\\n number:%d\n", cnt);

	return 0;
}
