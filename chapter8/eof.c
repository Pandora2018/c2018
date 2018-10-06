
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
#include <ctype.h>

int main(void)
{
	int ch;
	int cnt = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			cnt++;

		putchar(ch);
	}

	/* while (1)
	{
		ch = getchar();

		if (isalpha(ch))
			putchar(ch);
		else if (isdigit(ch))
			printf("%d", ch);
		else if (ch == EOF)
			break;
		else
			printf("\n");
	} */

	printf("------\n");
	printf("\\n number:%d\n", cnt);
	return 0;
}
