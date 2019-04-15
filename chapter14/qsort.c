/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : qsort.c
#   Last Modified : 2019-04-11 19:14
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int compare(const void *e1, const void *e2);

int main(void)
{
	/* int test[] = {30, 12, 1, 3, 5, 9}; */
	/* char test[] = {'f', 'r','t'}; */
	double test[] = {0.21, 3.21, 3.21, 0.11, 1.21};
	/*
	 * char test[][20] =
	 * {
	 *     "chenzhou",
	 *     "beijing",
	 *     "hunan",
	 *     "gangsusheng",
	 *     "sichang",
	 * };
	 */

	qsort(test, 5, sizeof(test[0]), compare);

	printf("array after sort :\n");
	
	for (int i = 0; i < sizeof(test) / sizeof(test[0]); ++i)
	{
		printf("%.2f ", test[i]);
	}

	putchar('\n');

	return 0;
}

int compare(const void *e1, const void *e2)
{
	return (*(double *)e1 > *(double *)e2 ? 1 : -1);
	/* return (strcmp(*(char **)e2, *(char **)e1)); */
	/* return (strlen((char *)e1) > strlen((char *)e2) ? 1 : -1); */
}
