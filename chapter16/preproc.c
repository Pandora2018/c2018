/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : preproc.c
#   Last Modified : 2019-04-29 19:12
#   Describe      :
#
# ====================================================*/

/* #include <stdio.h> */
#include "preproc.h"
#pragma c9x on

#line 40 "hello world.c"

int main(void)
{
	printf("function : %s\n", __func__);
	#if defined (TEST)
	printf("line : %d\n", __LINE__);
	printf("file : %s\n", __FILE__);
	printf("date : %s\n", __DATE__);
	#endif
	printf("time : %s\n", __TIME__);
	printf("C standard : %s\n", __STDC__ ? "YES" : "NO");
	printf("C version : %ld\n", __STDC_VERSION__);
	
	printf("CUBE(3) = %d\n", CUBE(3));
	SUB(9, 2);

	int XNAME(1) = 12;

	PRI(x1);

	return 0;
}
