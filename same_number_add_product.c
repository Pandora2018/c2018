/* ====================================================
#   Copyright (C)2020 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : same_number_add_product.c
#   Last Modified : 2020-03-29 16:48
#   Describe      :
#
# ====================================================*/


#include <stdio.h>


int main(void)
{
	long long int start_num, last_num;

	printf("start number:");
	scanf("%lld", &start_num);

	printf("last_num:");
	scanf("%lld", &last_num);

	long long int j, k;

	for (long long int i = start_num; i <= last_num; ++i)
	{
		if (1 == i)
			continue;

		j = i % (i - 1);

		if (! j)
		{
			k = i / (i - 1);
			printf("%lld * %lld = %lld + %lld = %lld\n",
					i, k, i, k, i + k);
		}
		
		/* printf("%lld ", i); */
	}

	return 0;
}
