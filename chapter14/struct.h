/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : struct.h
#   Last Modified : 2019-03-18 14:10
#   Describe      :
#
# ====================================================*/

struct car
{
	float height;
	float width;
	float length;
	char color[20];
	char brand[30];
};

struct point
{
	double x;
	double y;
};

struct names
{
	char *first;
	char *last;
};

struct friends
{
	struct names name;
	long int id;
	float weight;
};

static struct friends makeinfo(struct friends *boy);
static void getinfo(long int id, float weight);
