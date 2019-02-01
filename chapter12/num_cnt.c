/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : num_cnt.c
#   Last Modified : 2019-02-01 11:46
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int tmp, times = 0;
	unsigned int sed;
	int res[10] = {0}; // save each number count, res[0] save '1' number count
	int * boxes = (int *)malloc(1000 * sizeof(int));

	if (NULL == boxes) {
		printf("Program error\n");
		exit(-1);
	}

	while (times < 10) {
		sed = (unsigned int)time(NULL);
		srand(sed);

		for (int id = times * 100; id < (times + 1) * 100; id++) {
			/*
			 * tmp = rand() % 10;
			 * boxes[id] = (0 == tmp ? tmp + 1 :
			 *         (9 == tmp ? tmp + 1 : tmp)
			 *         );
			 */
			boxes[id] = rand() % 10 + 1;
		}
		
		times++;
	}

	for (int i = 0; i < 1000; i++) {
		switch (boxes[i]) {
			case 1: res[0]++; break;
			case 2: res[1]++; break;
			case 3: res[2]++; break;
			case 4: res[3]++; break;
			case 5: res[4]++; break;
			case 6: res[5]++; break;
			case 7: res[6]++; break;
			case 8: res[7]++; break;
			case 9: res[8]++; break;
			case 10: res[9]++; break;;
			default: break;
		}
	}

	for (int j = 1; j <= 10; j++)
		printf("number %d has %d times\n", j, res[j - 1]);

	int total = 0;
	for (int j = 0; j < 10; j++) {
		total += res[j];
	}

	printf("------------\n");
	printf("total : %d\n", total);

	free(boxes);

	return 0;
}
