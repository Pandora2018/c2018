/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : sit_book.c
#   Last Modified : 2019-04-09 18:58
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define NUM 12

struct sit_book
{
	int id;
	bool is_book;
	char first[20];
	char last[20];
};

extern void menu(void);
extern void get_id_book(struct sit_book *s);
extern unsigned int empty_seat(struct sit_book s[]);
extern void list_empty_seat(struct sit_book s[]);
extern int compare(const void *_L1, const void *_L2);
extern void assignment_seaat(struct sit_book *s);
extern void delete_seat(struct sit_book *s);
extern void show_customer(struct sit_book *s);

int main(void)
{
	char choose;
	struct sit_book seats[NUM];

	get_id_book(seats);

	menu();
	printf("You choose: ");

	while (scanf("%c", &choose) == 1 && choose != 'f')
	{
		switch (choose)
		{
			case 'a' : 
				printf("Empty seat num : %u\n", empty_seat(seats));
				break;
			case 'b' :
				printf("List empty seat : ");
				list_empty_seat(seats);
				puts("");
				break;
			case 'c' :
				qsort(seats, NUM, sizeof(struct sit_book), compare);
				break;
			case 'd' :
				assignment_seaat(seats);
				break;
			case 'e' :
				delete_seat(seats);
				break;
			default: 
				break;
		}

		while (getchar() != '\n') continue;

		printf("---------------------------------------\n");
		menu();
		printf("You choose: ");

	}

	show_customer(seats);
	
	printf("Quit!\n");

	return 0;
}

void menu(void)
{
	printf("To choose a function, enter its letter label:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) Delete a seat assignment\n");
	printf("f) Quit\n");

	return;
}

void get_id_book(struct sit_book *s)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 12; ++i)
	{
		(s + i)->id = i + 1;
		(s + i)->is_book = (rand() % 2);
	}
	
	return;
}

unsigned int empty_seat(struct sit_book s[])
{
	unsigned int sum = 0;

	for (int i = 0; i < 12; ++i)
	{
		if (! s[i].is_book)
			++sum;
	}

	return sum;
}

void list_empty_seat(struct sit_book s[])
{
	for (int i = 0; i < 12; ++i)
	{
		if (! s[i].is_book)
			printf("%d ", s[i].id);
	}

	return;
}

int compare(const void *_L1, const void *_L2)
{
	char * __L1 = (char *)_L1;
	char * __L2 = (char *)_L2;

	return strcmp(__L1, __L2);
}

void assignment_seaat(struct sit_book *s)
{
	unsigned char seat;

	printf("Enter seat num: ");
	scanf("%hhu", &seat);

	if (! (s + seat - 1)->is_book)
	{
		printf("Enter first and last name : \n");
		scanf("%s %s", (s + seat - 1)->first, (s + seat - 1)->last);
		(s + seat -1)->is_book = true;
		printf("%d seat was booked\n", seat);
	}
	else
		printf("Seat have assignment!\n");

	return;
}

void delete_seat(struct sit_book *s)
{
	unsigned char seat_num;

	printf("Enter delete seat num :");
	scanf("%hhu", &seat_num);

	if ((s + seat_num - 1)->is_book)
	{
		(s + seat_num - 1)->is_book = false;
		printf("%hhu seat delete\n", seat_num);
	}
	else
	{
		printf("%hhu was empty seat.\n", seat_num);
	}

	return;
}

void show_customer(struct sit_book *s)
{
	for (int i = 0; i < 12; ++i)
	{
		if ((s + i)->is_book)
			printf("%s %s seat id : %d\n", (s + i)->first, (s + i)->last, (s + i)->id);
	}

	return;
}
