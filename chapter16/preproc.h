/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : preproc.h
#   Last Modified : 2019-04-29 19:12
#   Describe      :
#
# ====================================================*/

/* #line 202 "hello world" */

#ifndef PREPROC_H_
#define PREPROC_H_

#include <assert.h>

#ifndef CUBE
#	define CUBE(x) ((x)*(x)*(x))
#endif

#ifndef SIZE
#	define SIZE 40
#endif

#ifndef SUB
#	define SUB(x, y) printf(#x " - " #y " = %d\n", x - y)
#endif

#if 0
#define LINUX		// null macro

#ifdef LINUX
	#include <stdio.h>

#endif
#endif

#if 0
#define OS linux

#if OS == linux		// use logic operator
	#include <stdio.h>
#endif
#endif

#if SIZE > 2 && SIZE < 20
	#include <stdio.h>
#endif

#ifndef PASTER
#	define XNAME(n) x##n
#	define PRI(x) printf("X = %d\n", x);
#endif

static void display_arr(const int *ar, int n);
void elect(const int *ar, int size, int sel);

inline static double cube(double x)
{
	return (x * x * x);
}

inline static double fact(int x)
{
	long double res = 1.00;
	
	assert(x >= 0);

	if (x == 0 || x == 1) return res;

	for (int i = 1; i <= x; ++i)
		res *= i;

	return res;
}

inline static void display_arr(const int *ar, int n)
{
	assert(n > 0);

	for (int i = 0; i < n; ++i)
		printf("%d ", ar[i]);

	return;
}

#endif
