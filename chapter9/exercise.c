
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : exercise.c 
#   Last Modified : 2018-11-02 18:23
#   Describe      : exercise
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>
#include "exercise.h"


int main(void)
{
	/* printf("enter three integers to screen:\n");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c); */

	/* max(a, b, c); */
	
	/* char ch;
	int i, j;
	
	printf("Please input a character:");
	scanf("%c", &ch);
	printf("Please input two integers:");
	scanf("%d %d", &i, &j);

	chline(ch, i, j); */

	int ch, location;
	printf("Please input some character:\n");

	while((ch = getchar()) != EOF){

		if(!isalpha(ch)) continue;

		location = position(ch);

		printf("\'%c\' character position : %d\n", ch, location);

		printf("Please input next character:\n");
	}

	printf("Done!\n");

	return 0;
}


void max(int x, int y, int z)
{
	int temp;

	if(x > y){
		temp = x;
	}else{
		temp = y;
	}

	if (temp > z){
		printf("max value : %d\n", temp);
	}else{
		printf("max value : %d\n", z);
	}

	return;
}


void chline(char ch, int i, int j)
{
	int m, n;
	
	for(m = 0; m < j; m++){
		for(n = 0; n < i; n++)
			putchar(ch);
			putchar('\n');
	}

	return;
}


int position(char ch)
{
	int location;
	
	char tmp = islower(ch) ? 'a' : 'A';

	location = ch - tmp + 1;

	return location;
}
