/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : realloc_vla.c
#   Last Modified : 2019-01-12 09:52
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int num, tmp;
	puts("Enter a number:");
	scanf("%d", &num);

	int * pi = (int *)malloc(num * sizeof(int));

	if (!pi) exit(-1);

	for (int i = 0; i < num; i++) {
		pi[i] = rand() % 100;
		printf("%3d", pi[i]);
	}

	tmp = num;

	puts("");

	puts("Enter again a number:");
	scanf("%d", &num);

	pi = (int *)realloc(pi, num * sizeof(int));

	if (!pi) exit(-1);

	/*
	 * pi = (int *)realloc(NULL, num * sizeof(int));
	 * equals to malloc(num * sizeof(int));
	 */

	/*
	 * pi = (int *)realloc(pi, 0); 
	 * equals to free(pi);
	 */

	for (int i = tmp; i < num; i++ ) {
		pi[i] = rand() % 100;
	}

	// show heap memory data
	for (int i = 0; i < num; i++)
		printf("%3d", pi[i]);

	free(pi);
	
	return 0;
}
