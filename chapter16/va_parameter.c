/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : va_parameter.c
#   Last Modified : 2019-05-06 17:58
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "preproc.h"

int main(void)
{
	double *p1 = NULL;
	double *p2 = NULL;

	p1 = new_d_arr(5, 1.2, 1.3, 1.4, 2.1, 2.3);
	p2 = new_d_arr(4, -100.0, 200.0, +300.0, 400.0);

	show_array(p1, 5);
	putchar('\n');

	show_array(p2, 4);
	putchar('\n');

	free(p1);
	free(p2);

	p1 = p2 = NULL;

	return 0;
}
