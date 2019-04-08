/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : student.c
#   Last Modified : 2019-04-08 19:43
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>

#define CSIZE 4

struct name
{
	char first[20];
	char last[20];
};

struct student
{
	double grade[3];
	double avg;
	struct name ne;
};

extern void show_info(struct student s[]);
extern double all_avg(struct student s);

int main(void)
{
	struct student test[CSIZE];

	strcpy(test[0].ne.last, "Jim");
	strcpy(test[1].ne.last, "Luly");
	strcpy(test[2].ne.last, "Lily");
	strcpy(test[3].ne.last, "Jack");

	for (int cnt = 0; cnt < CSIZE; ++cnt)
	{
		printf("Enter first name:");
		fscanf(stdin, "%s", test[cnt].ne.first);

		printf("Enter three grade:\n");
		fscanf(stdin, "%lf %lf %lf", &test[cnt].grade[0], &test[cnt].grade[1], &test[cnt].grade[2]);
	}
	
	double total = 0.00;

	for (int i = 0; i < CSIZE; ++i)
	{
		total = test[i].grade[0] + test[i].grade[1] + test[i].grade[2];
		test[i].avg = total / 3;
	}

	show_info(test);

	double all_grade = 0.00;

	for (int i = 0; i < CSIZE; ++i)
		all_grade += all_avg(test[i]);		// print Class averge grade

	puts("================");
	printf("Class grade averge : %.2f\n", all_grade / 12);

	return 0;
}

void show_info(struct student s[])
{
	for (int i = 0; i < CSIZE; ++i)
		printf("%s %s; grade : %.2f %.2f %.2f; avg : %.2f\n", 
				s[i].ne.first, s[i].ne.last, s[i].grade[0], s[i].grade[1], s[i].grade[2], s[i].avg);
	
	return;
}

double all_avg(struct student s)
{
	double sum = 0.00;

	for (int i = 0; i < 3; ++i)
		sum += s.grade[i];

	return sum;
}
