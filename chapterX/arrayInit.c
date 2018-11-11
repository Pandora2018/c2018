
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arrayInit.c
#   Last Modified : 2018-11-05 14:55
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int (* p1)[MONTH] = &days;
	const int (* p2)[MONTH] = p1;
	
	int * p3 = days;
	const int * p4 = p3;
	// *(p3 + 2) = 21;
	// printf("days[%d] = %d\n", 3, *(p4 + 2));
	
	// two demension
	float price[3][4] = 
	{
		{3.1, 3.2},
		{2.0},
		{1.0}
	};	

	getPoint(price);
	
	// three demension
	float rain[2][3][4] =
	{
		{
			{1.0,2.0,3.0,4.0},
			{1.0,2.0,3.0,4.0},
			{1.0,2.0,3.0,4.0},
		},
		{
			{1.0,2.0,3.0,4.0},
			{1.0,2.0,3.0,4.0},
			{1.0,2.0,3.0,4.0},
		},
	};

	// indexOver();

	return 0;
}

void getPoint(float (* ar)[][4])
{
	// array's point
	float (* ptr)[4] = ar;

	printf("address of ar : %p\n", ptr);
	putchar('\n');

	for (int i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		printf("address of ar[%d] : %p\n", i, ptr + i);

		for (int j = 0; j < sizeof(ar[i]) / sizeof(ar[i][0]); j++)
			// printf("[%d][%d] : %p\n", i, j, &ar[i][j]);
			printf("[%d][%d] : %p\n", i, j, *(ptr + i) + j);

		putchar('\n');
	}
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
