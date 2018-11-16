
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arr_add.c
#   Last Modified : 2018-11-16 11:22
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	double test1[ROWS][COLS], test2[ROWS][COLS], answer[ROWS][COLS];

	mkd_arr(ROWS, COLS, test1);
	mkd_arr(ROWS, COLS, test2);

	ard_add(ROWS, COLS, test1, test2, answer);

	shd_arr(ROWS, COLS, test1);
	putchar('\n');
	shd_arr(ROWS, COLS, test2);
	putchar('\n');
	shd_arr(ROWS, COLS, answer);

	return 0;
}
