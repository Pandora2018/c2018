/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : data_storage.h
#   Last Modified : 2019-05-07 19:36
#   Describe      :
#
# ====================================================*/

#ifndef DATA_STORAGE_H_
#define DATA_STORAGE_H_

#if defined(LINKED)
struct film
{
	unsigned int rate;	// 0 ~ 10
	struct film *next;
	char title[];
};

typedef struct film FILM;
#endif



#endif
