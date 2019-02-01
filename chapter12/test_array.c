/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : test_array.c
#   Last Modified : 2019-02-01 11:41
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

double * make_array(int size, double v);
void show_array(const double * ar, int size);

int main(void)
{
	int size;
	double * ret = NULL;

	printf("Enter array size:");
	scanf("%d", &size);

	ret = make_array(size, 3.6);

	show_array(ret, size);

	free(ret);

	return 0;
}

double * make_array(int size, double v)
{
	int id = 0;		// array start index
	double * ar = (double *)malloc(size * sizeof(double));
	
	if (NULL == ar) exit(-1);

	do {
		ar[id] = v;
	} while (++id < size);

	return ar;
}

void show_array(const double * ar, int size)
{
	for (int id = 0; id < size; id++) {
		if (id != 0 && id % 8 == 0)
			putchar('\n');

		printf("%5.2f", ar[id]);
	}

	return;
}
