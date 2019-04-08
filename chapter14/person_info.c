/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : person_info.c
#   Last Modified : 2019-04-08 13:08
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person_info
{
	char id[30];
	struct
	{
		char first[30];
		char middle[30];
		char last[30];
	};
};

extern void show_info(struct person_info p[], int n);

int main(void)
{
	struct person_info test[] =
	{
		{"302039823", {"Floss", "Eaa", "Drib"}},
		{"302039824", {.first = "Flos", .last = "Dribb"}},
		{"302039825", {"Flossie", "Maa", "Drble"}},
		{"302039826", {.first = "Flose", .last = "Drible"}},
		{"302039827", {"Flos", "Paa", "Dribbe"}}
	};

	show_info(test, 5);

	return 0;
}

void show_info(struct person_info p[], int n)
{
	char mid[3] = { 0 };
	
	for (int i = 0; i < n; ++i)
	{
		if (strlen(p[i].middle) == 0)
		{
			mid[0] = '\0';
		}
		else
		{
			mid[0] = p[i].middle[0];
			mid[1] = '.';
			mid[2] = '\0';
		}
		
		printf("%s, %s, %s- %s\n", p[i].last, p[i].first, mid, p[i].id);
	}

	return;
}
