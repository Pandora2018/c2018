/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : locale.c
#   Last Modified : 2019-06-02 09:53
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
	struct lconv *lc = localeconv();

	printf("decimal_point : %s\n", lc->decimal_point);
	printf("thousands_sep : %s\n", lc->thousands_sep);
	printf("positive_sign : %s\n", lc->positive_sign);
	printf("frac_digits : %c\n", lc->frac_digits);

	lc = NULL;

	return 0;
}
