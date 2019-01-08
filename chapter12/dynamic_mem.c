/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : dynamic_mem.c
#   Last Modified : 2019-01-08 17:40
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

extern void mem_leak(void);

int main(void)
{
	int num;
	double * ptd;
	short int * pts;

	puts("Enter a integer to screen:");
	scanf("%d", &num);

	// dynamic memory allocation
	ptd = (double *)malloc(num * sizeof(double));
	pts = (short *)calloc(num, sizeof(short));

	if (ptd == NULL)
		exit(EXIT_FAILURE);

	/*
	 * for (int i = 0; i < num; i++) {
	 *     puts("Enter a double value and a integer:");
	 *     scanf("%lf %hd", ptd + i, pts + i);
	 * }
	 */

	puts("malloc function dynamic memory:");
	for (int i = 0; i < num; i++)
		printf("&ptd[%d] = %p\tptd[%d] = %.2f\n", i, ptd + i, i, *(ptd + i));

	puts("calloc function dynamic memory:");
	for (int i = 0; i < num; i++)
		printf("&pts[%d] = %p\tpts[%d] = %hd\n", i, pts + i, i, *(pts + i));

	/*
	 * while ((double *)malloc(10000 * sizeof(double)) != NULL)
	 *         continue;
	 * 
	 * exit(EXIT_FAILURE);
	 */

	free(ptd);
	free(pts);

	return 0;
}
