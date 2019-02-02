/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : malloc_word.c
#   Last Modified : 2019-02-02 09:00
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void word_malloc(void);

int main(void)
{
	word_malloc();

	return 0;
}

void word_malloc(void)
{
	int num;
	printf("How many word_do you wish to enter? ");
	scanf("%d", &num);
	
	char ** ch = (char **)malloc(num * sizeof(char *));
	
	if (NULL == ch) exit(-1);

	for (int i = 0 ; i < num; i++) {
		char word[30];
		printf("Enter word:");
		scanf("%s", word);
		int slen = strlen(word);
		
		char * cha = (char *)malloc(slen * sizeof(char));

		if (NULL == cha) exit(-1);

		for (int j = 0; j < slen; j++) {
			cha[j] = word[j];
		} 
		
		ch[i] = cha;

		// todo : not free cha
	}

	puts("Here are you words:");

	for (int k = 0; k < num; k++) {
		puts(ch[k]);
	}

	free(ch);
	
	return;
}
