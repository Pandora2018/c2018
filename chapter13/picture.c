/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : picture.c
#   Last Modified : 2019-03-14 10:44
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	FILE *fp = NULL;
	int ro, co;

	printf("enter row and col:\n");
	scanf("%d %d", &ro, &co);

	int pic[ro][co];
	char str[ro][co + 1];

	char table[] = {' ' , '.' , '\'' , '\"' , '^' , '*' , '%' , '$' , '@' , '#'};	
	
	if ((fp = fopen("picture.dat", "r")) == NULL)
	{
		printf("opne picture file failure\n");
		exit(EXIT_FAILURE);
	}

	srand((unsigned int)time(0));

	for (int row = 0; row < ro; ++row)
	{
		for (int col = 0; col < co; ++col)
		{
			fscanf(fp, "%d", &pic[row][col]);
			/* pic[row][col] = rand() % 10; */
		}
	}

	for (int i = 0; i < ro; ++i)
	{
		for (int j = 0; j < co; ++j)
			str[i][j] = table[pic[i][j]];

		str[i][co] = '\0';
	}
	
	fclose(fp);

	if ((fp = fopen("pic.txt", "w")) == NULL)
	{
		printf("new file failure\n");
		exit(EXIT_FAILURE);
	}
	
	for (int rows = 0; rows < ro; ++rows)
	{
		fprintf(stdout, "%s\n", str[rows]);
		fprintf(fp, "%s\n", str[rows]);
	}

	fclose(fp);
	fp = NULL;

	return 0;
}
