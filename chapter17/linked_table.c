/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : linked_table.c
#   Last Modified : 2019-05-07 19:35
#   Describe      :
#
# ====================================================*/

#define LINKED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "date_storage.h"
#include "../chapter11/str.h"

int main(void)
{
	FILM *head = NULL;
	FILM *current, *prev;
	
	char film[30];
	
	puts("Please input film name : ");

	while (s_gets(film, 30) && film[0] != '\0')
	{
		current = (FILM *)malloc(sizeof(FILM) + strlen(film));

		assert(current != NULL);

		if (head == NULL)
			head = current;
		else
			prev->next = current;

		current->next = NULL;
		
		puts("Please input rate : ");
		scanf("%u", &current->rate);
		strcpy(current->title, film);

		while (getchar() != '\n') continue;

		prev = current;

		puts("Please input next film : ");
	}

	if (head == NULL)
		puts("No date !");
	else
		puts("film list : ");
	
	current = head;

	while (current != NULL)
	{
		printf("film name : %-12s, rate : %u\n", 
				current->title, current->rate);
		current = current->next;
	}

	current = head;
	
	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
	
	return 0;
}
