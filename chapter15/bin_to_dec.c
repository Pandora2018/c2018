/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bin_to_dec.c
#   Last Modified : 2019-04-24 10:11
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "bit.h"

int main(void)
{
	char sbin[33];
	printf("Enter binary string :");
	scanf("%32s", sbin);

	int res = bin_to_dec(sbin);

	printf("Binary string : %s, decimal : %d\n", sbin, res);

	return 0;
}
