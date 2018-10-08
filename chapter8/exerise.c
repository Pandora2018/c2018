
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : exerise.c
#   Last Modified : 2018-10-08 19:21
#   Describe      : this is chapter8 exerise
#
# ====================================================*/

#include <stdio.h>

void charcnt(void);
void pri_ascii(void);

int main(void)
{
	charcnt();

	return 0;
}


void charcnt(void)
{
	int ch;
	int count = 0;

	printf("Please input s string:\n");

	while ((ch = getchar()) != EOF)
			count++;
	
	printf("you input string have %d character\n", count);
}


void pri_ascii(void)
{

}
