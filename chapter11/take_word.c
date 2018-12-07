
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : take_word.c
#   Last Modified : 2018-12-06 18:37
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char word[10];

	puts("enter string:");
	while (take_word(word))
		puts(word);

	return 0;
}
