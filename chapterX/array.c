
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : array.c
#   Last Modified : 2018-11-16 10:08
#   Describe      : solution double array
#
# ====================================================*/


#include <stdio.h>


// make a double array,element value from 0.0 to (rows - 1) * cols + (cols - 1)
void mkd_arr(int rows, int cols, double ar[rows][cols])
{
	int i, j, start;

	for (i = 0; i < rows; i++){
		start = i * cols;
		for (j = 0; j < cols; j++)
			ar[i][j] = start + j;
	}
	
	return;
}

// copy double array to new double array
void copyd_arr(int rows, int cols, const double source[rows][cols], double target[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++)
			*(*(target + i) + j) = *(*(source + i) + j);
	}
	
	return;
}


// display double array to screen
void shd_arr(int rows, int cols, const double ar[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++)
			printf("%.2f ", ar[i][j]);
	
		putchar('\n');
	}
	
	return;
}


void ard_add(int rows, int cols, const double addend[rows][cols], const double summend[rows][cols], double answer[rows][cols])
{
	int i, j;

	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++)
			answer[i][j] = addend[i][j] + summend[i][j];
	}

	return;
}
