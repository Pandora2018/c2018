/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : callf_cnt.c
#   Last Modified : 2019-01-29 18:26
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

void fun_cnt(void);

int main(void)
{
	int flag = 1;

	while (flag) {
		fun_cnt();
		flag++;

		if (flag > 100)
			flag = 0;
	}

	return 0;
}

void fun_cnt(void)
{
	static int cnt = 0;

	printf("called fun_cnt %d times\n", ++cnt);

	return;
}
