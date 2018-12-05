
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : take_str.c
#   Last Modified : 2018-12-05 18:39
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	char test[10];

	puts("enter some character:");
	take_s(test, 10);

	puts(test);


	return 0;
}
