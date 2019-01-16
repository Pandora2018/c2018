/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : volatile.c
#   Last Modified : 2019-01-16 19:16
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	volatile time_t t = time(NULL);

	for (int n = 0; n < 100000; n++) {
		printf("%2d --> %ld\n", n, t);
		t = time(NULL);
	}

	return 0;
}
