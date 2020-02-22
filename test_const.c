/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_const.c
#   Last Modified : 2020-02-21 17:51
#   Describe      :
#
# ====================================================*/


#include <stdio.h>

extern const short int b = 12;

int main(void)
{
	printf("b = %hd\n", b);

	return 0;
}
