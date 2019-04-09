/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : softball.c
#   Last Modified : 2019-04-09 08:45
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

struct name
{
	char first[20];
	char last[20];
};

struct team
{
	unsigned char id;
	struct name ne;
	unsigned char join_cnt;
	unsigned char hit_cnt;
	unsigned char walk_cnt;
	unsigned char point;
	float rate;
};

extern void read_to_struct(FILE *fp, struct team *s);
extern float get_rate(struct team *t);
extern void show_info(struct team *t);

int main(void)
{
	struct team players[6];

	FILE *fp = NULL;

	if ((fp = fopen("test", "rt")) == NULL)
	{
		fprintf(stdout, "open file failure\n");
		exit(EXIT_FAILURE);
	}

	read_to_struct(fp, players);
	
	for (int i = 0; i < 6; ++i)
		players[i].rate = get_rate(&players[i]);

	show_info(players);

	fclose(fp);
	fp = NULL;

	return 0;
}

void read_to_struct(FILE *fp, struct team *s)
{
	while (fscanf(fp, "%hhu %s %s %hhu %hhu %hhu %hhu",
				&s->id, s->ne.first, s->ne.last,
				&s->join_cnt, &s->hit_cnt,&s->walk_cnt, &s->point) != EOF)
	{
		++s;
	}

	return;
}

float get_rate(struct team *t)
{
	return ((float)t->hit_cnt / t->join_cnt);
}

void show_info(struct team *t)
{
	for (int i = 0; i < 6; ++i, ++t)
	{
		printf("%02hhu %8s %-8s %3hhu %3hhu %3hhu %3hhu %6.2f\n",
				t->id, t->ne.first, t->ne.last,
				t->join_cnt, t->hit_cnt, t->walk_cnt, t->point,
				t->rate);
	}
	
	return;
}
