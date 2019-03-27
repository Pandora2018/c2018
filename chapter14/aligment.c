/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : aligment.c
#   Last Modified : 2019-03-27 18:40
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include "struct.h"

#pragma pack(8)
#pragma pack(push, 4)

int main(void)
{
	printf("sizeof(struct car) : %zd Byte\n",
			sizeof(struct car));

	struct car suv;

	printf("suv.brand : %p\n", &suv.brand);
	/* printf("su.color : %p\n", &suv.color); */
	printf("suv.length : %p\n", &suv.length);
	printf("suv.width : %p\n", &suv.width);
	printf("suv.height : %p\n", &suv.height);

	return 0;
}

#pragma pack(pop)
