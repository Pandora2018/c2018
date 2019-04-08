/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : scanfDemo.c
#   Last Modified : 2019-04-08 14:16
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	int count = -1024;
	double assets = -1.024e10;
	char products[100] = "apple watch,iphone......";

	unsigned int field_width, point_precision, string_num;

	// use * in the printf() function
	printf("enter field width:");
	scanf("%d", &field_width);
	printf("[%*d]\n", field_width, count);

	printf("enter field width and point precision:");
	scanf("%d %d", &field_width, &point_precision);
	printf("[%*.*f]\n", field_width, point_precision, assets);
	
	printf("enter field width and String number:");
	scanf("%d %d", &field_width, &string_num);
	printf("[%-*.*s]\n", field_width, string_num, products);

	// use * in the scanf() function
	char last_colors[10];
	printf("enter three colors:");
	scanf("%*d %*d %s", last_colors);
	printf("Last Color is %s\n",last_colors);

	printf("enter assets and products:");
	int total = scanf("%5lf %s", &assets, products);

	printf("assets:%5.2f,products:%s\n",
			assets, products);
	printf("scanf() function return %d input date\n", total);

	// print EOF value(EOF = end of file)
	// printf("EOF value:%d\n", EOF);
	
	return 0;

}
