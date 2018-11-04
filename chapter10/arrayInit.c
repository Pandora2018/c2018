
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arrayInit.c
#   Last Modified : 2018-11-04 13:30
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	// designate initializer
	/* int days[] = {[10] = 30, 31}; */

	int index, sum = 0;

	for (index = 1; index <= sizeof(days) / sizeof(int); index++){
		printf("%02d month has %d days\n", index, days[index - 1]);
		sum += days[index - 1];
		printf("%02d month after days of a year : %d\n", index, sum);
		putchar('\n');
	}

	/* indexOver(); */

	return 0;
}


void indexOver(void)
{
	int value1 = 100;
	int array[SIZE];
	int value2 = 200;
	int i;

	printf("value1 : %d, value2 : %d\n", value1, value2);

	putchar('\n');

	for (i = -1; i <= SIZE; i++)
		array[i] = i * 10;

	for (i = -1; i < 7; i++)
		printf("arr[%d] : %d\n", i, array[i]);

	putchar('\n');

	printf("value1 : %d, value2 : %d\n", value1, value2);

	putchar('\n');
	printf("value1 of address : %p\n", &value1);
	printf("array[-1] of address : %p\n", &array[-1]);

	return;
}
