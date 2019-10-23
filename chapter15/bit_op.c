/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit_op.c
#   Last Modified : 2019-04-25 08:35
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "bit.h"

int main(int argc, char *argv[])
{
	printf("%s : %d\n%s : %d\n", argv[1], bin_to_dec(argv[1]), 
				argv[2], bin_to_dec(argv[2]));

	printf("%s & %s : ", argv[1], argv[2]);
	bit_and(argv[1], argv[2]);
	puts("");

	printf("%s | %s : ", argv[1], argv[2]);
	bit_or(argv[1], argv[2]);
	puts("");

	printf("%s ^ %s : ", argv[1], argv[2]);
	bit_xor(argv[1], argv[2]);
	puts("");

	printf("~ %s : ", argv[1]);
	bit_not(argv[1]);
	puts("");

	printf("~ %s : ", argv[2]);
	bit_not(argv[2]);
	puts("");
	
	return 0;
}
