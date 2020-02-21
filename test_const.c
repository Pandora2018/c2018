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

// typedef const const const const short int a;

int main(void)
{
	// const const const const short int a = 10;
	// const a b = 100;
	const short int b = 100;

	// printf("a = %hd\n", a);
	printf("b = %hd\n", b);


	/*
	 * float price = 2.12, num = 4.00;
	 * float * const pf = &price;
	 */
	// pf = &num;	
	// printf("price = %.2f\n", *pf);

	return 0;
}
