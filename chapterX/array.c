
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


// the function from keyboard get double array element
void getd_arr(int rows, int cols, double ar[rows][cols])
{
	int i, j;

	printf("%d rows and %d cols\n", rows, cols);
	
	for (i = 0; i < rows; i++){
		printf("Please input %dth double number:\n", i + 1);
		for (j = 0; j < cols; j++)
			scanf("%lf", &ar[i][j]);
	}

	return;
}


// the function calcalation double array element average
double ard_avg(int n, double ar[n])
{
	double avg, sum = 0.0;

	for (int i = 0; i < n; i++)
		sum += ar[i];

	avg = sum / n;

	return avg;
}


// calcalation double array all element average
double ard_all_avg(int rows, int cols, double ar[rows][cols])
{
	double avg, sum = 0.0;

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++)
			sum += ar[i][j];
	}

	avg = sum / (rows * cols);

	return avg;
}


// from double array find maxium value
double getd_max(int rows, int cols, double ar[rows][cols])
{
	double maxium = ar[0][0];

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			if (ar[i][j] > maxium)
				maxium = ar[i][j];
		}
	}

	return maxium;
}


// from double array find min value
double getd_min(int rows, int cols, double ar[rows][cols])
{
	int x, y;
	x = y = 0;

	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			if (ar[i][j] < ar[x][y]){
				x = i;
				y = j;
			}
		}
	}

	return ar[x][y];
}
