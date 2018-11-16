
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : var_len_arr.c
#   Last Modified : 2018-11-16 10:13
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	double test[ROWS][COLS], des[ROWS][COLS];
	
	mkd_arr(ROWS, COLS, test);
	copyd_arr(ROWS, COLS, test, des);
	shd_arr(ROWS, COLS, test);
	putchar('\n');
	shd_arr(ROWS, COLS, des);
	
	return 0;
}
