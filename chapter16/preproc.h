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

#ifndef TEST
	#define TEST 1
#endif

#ifndef CUBE
	#define CUBE(X) ((X)*(X)*(X))
#endif

#ifndef SUB
	#define SUB(X, Y) printf(#X " - " #Y " = %d\n", X - Y)
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

#define SIZE 10

#if SIZE > 2 && SIZE < 20
	#include <stdio.h>
#endif

#ifndef PASTER
	#define XNAME(N) x##N
	#define PRI(x) printf("X = %d\n", x);
#endif
