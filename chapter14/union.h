/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : union.h
#   Last Modified : 2019-03-27 10:38
#   Describe      :
#
# ====================================================*/

union tree
{
	int age;
	double height;
	_Bool flag;
	// char pos[20];
};

struct planet
{
	int num;
	union
	{
		int age;
		double height;
		_Bool flag;
	};
};
