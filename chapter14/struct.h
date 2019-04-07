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

typedef struct _Month
{
	char name[15];
	char abbr[4];
	int days;
	int num;
} month;

month list[12] =
{
	{
		"January", "Jan", 31, 1
	},
	{
		"February", "Feb", 28, 2
	},
	{
		"March", "Mar", 31, 3
	},
	{
		"April", "Apr", 30, 4
	},
	{
		"May", "May", 31, 5
	},
	{
		"June", "Jun", 30, 6
	},
	{
		"July", "Jul", 31, 7
	},
	{
		"August", "Aug", 31, 8
	},
	{
		"September", "Sep", 30, 9
	},
	{
		"October", "Oct", 31, 10
	},
	{
		"November", "Nov", 30, 11
	},
	{
		"December", "Dec", 31, 12
	}
};

struct day
{
	unsigned char mday;	// 1 ~ 31
	union
	{
		unsigned char month_id;		// 1 ~ 12
		char abbr_month[4];
		char full_month[20];
	};
	unsigned int year;
};

// unsigned int days_cnt(const char *mon);
