/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : sort_r.c
#   Last Modified : 2019-01-29 18:57
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static void desc(int * arr, int num);

int main(void)
{
	int tmp;
	unsigned int sed = (unsigned int)time(NULL);
	srand(sed);
	/* int boxes[30]; */
	int * boxes = (int *)calloc(30, sizeof(int));

	for (int id = 0; id < 30; id++) {
		tmp = rand() % 10;

		boxes[id] = (0 == tmp ? tmp + 1 :
				(9 == tmp ? tmp + 1 : tmp)
				);
	}

	puts("Before sort:");
	
	for (int id = 1; id <= 30; id++) {
		printf("%4d", boxes[id - 1]);
		
		if (id % 10 == 0)
			putchar('\n');
	}

	desc(boxes, 30);

	putchar('\n');
	puts("After sort:");

	for (int id = 1; id <= 30; id++) {
		printf("%4d", boxes[id - 1]);
		
		if (id % 10 == 0)
			putchar('\n');
	}

	return 0;
}

static void desc(int * arr, int num)
{
	int tmp;

	for (int i = 0; i < num - 1; i++) {
		for (int j = i + 1; j < num; j++) {
			if (arr[i] < arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	return;
}
