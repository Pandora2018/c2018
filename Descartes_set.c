/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : Descartes_set.c
#   Last Modified : 2019-10-23 12:21
#   Describe      :
#
# ====================================================*/


#include <stdio.h>

int main(void)
{
	int set_1[] = {10,12,23,45,43};
	int set_2[] = {16,32,90,100,300};
	double set_3[] = {3.12,11.11,1.56};
	
	unsigned int cnt = 0;	
	int x, y; double z;
	
	printf("{");

	for (int i=0;i<sizeof(set_1)/sizeof(int);++i)
	{
		x = set_1[i];
		
		for (int j=0;j<sizeof(set_2)/sizeof(int);++j)
		{
			y = set_2[j];
			
			for (int k=0;k<sizeof(set_3)/sizeof(double);++k)
			{
				++cnt;
				z = set_3[k];
				printf("{%d,%d,%.2lf} ", x, y, z);
			}
		}
	}

	printf("}");
	puts("");

	printf("Descartes set element : %u\n", cnt);

	return 0;
}
