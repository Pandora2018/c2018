/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : str_fun.c
#   Last Modified : 2019-03-18 14:37
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(void)
{
	struct friends boy;

	boy = makeinfo(&boy);

	/* struct friends other_boy = boy; */

	printf("%s %s's id : %ld, weight : %.2f\n",
			boy.name.first, boy.name.last, boy.id, boy.weight);

	/* getinfo(boy.id, boy.weight); */

	return 0;
}

static struct friends makeinfo(struct friends *f)
{
	/*
	 * f->name.first = (char *)malloc(sizeof(char) * 30);
	 * f->name.last = (char *)malloc(sizeof(char) * 30);
	 */

	printf("Please enter fist name:\n");
	scanf("%s", f->name.first);

	printf("Please enter last name:\n");
	scanf("%s", f->name.last);

	printf("Please enter id:\n");
	scanf("%ld", &f->id);

	printf("Please enter weight:\n");
	scanf("%f", &f->weight);

	return (*f);
}

static void getinfo(long int id, float weight)
{
	printf("id : %ld, weight : %.2f\n",
			id, weight);

	return;
}
