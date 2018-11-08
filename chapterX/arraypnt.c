
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arraypnt.c
#   Last Modified : 2018-11-08 18:49
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "array.h"


int main(void)
{
	double box[LENGTH] = {1.1, 2.1, 3.9, 4.7, 5.9, 4.3};
	double answer;

	answer = arrSum(box, box + LENGTH);

	printf("box array summary of all element : %.2f\n", answer);

	/* arinit(10); */
	return 0;
}


double arrSum(const double * start, const double * end)
{
	double total = 0;

	while (start < end)
	{
		total += *(start++);
		// start++;
	}

	return total;
}


void arinit(int length)
{
	double ar[length];

	for (int index = 0; index < length; index++)
		*(ar + index) = index;

	for (int index = 0; index < length; index++)
		printf("a[%d] = %.2f\n", index, *(ar + index));
}
