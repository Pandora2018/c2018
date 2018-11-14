
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : cp_more_ar.c
#   Last Modified : 2018-11-14 19:37
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	double target[ROWS][COLS];
	double source[ROWS][COLS] = {
		{1.1, 1.2, 1.3, 1.4},
		{2.1, 2.2, 2.3, 2.4},
		{3.1, 3.2, 3.3, 3.4}
	};

	for (int i = 0; i < ROWS; i++)
	{
		cp_arr(source[i], target[i], COLS);
		// cp_point(target[i], source[i], source[i] + COLS);
		sh_arr(target[i], target[i] + COLS);
	}
	
	putchar('\n');

	/*
	 * use blow function sulution copy source array to target array, 
	 * and print target array.
	 */
	cp_ar(source, target);

	// print third to fiveth element of so array
	double so[] = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7};
	double des[3];

	putchar('\n');

	cp_arr(so + 2, des, 3);
	sh_arr(des, des + 3);

	return 0;
}


void cp_ar(const double (* so)[COLS], double (* des)[COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		cp_point(*(des + i), *(so + i), *(so + i) + COLS);
		sh_arr(*(des + i), *(des + i) + COLS);
	}

	return;
}
