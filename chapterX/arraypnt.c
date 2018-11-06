
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : arraypnt.c
#   Last Modified : 2018-11-06 08:57
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

	return 0;
}


double arrSum(double * start, double * end)
{
	double total = 0;

	while (start < end)
	{
		total += *(start++);
		// start++;
	}

	return total;
}
