
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : point_op.c
#   Last Modified : 2018-11-06 10:03
#   Describe      :
#
# ====================================================*/

#include <stdio.h>


int main(void)
{
	float dates[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	float * ptr1 = dates;
	float * ptr2 = &dates[2];

	printf("ptr2 - ptr1 = %td\n", ptr2 - ptr1);

	printf("ptr1 addrress:%p\nptr1 : %p\n*ptr1 : %f\n", &ptr1, ptr1, *ptr1);

	ptr1++;;

	printf("ptr1 addrress:%p\nptr1 : %p\n*ptr1 : %f\n", &ptr1, ptr1, *ptr1);

	ptr1--;

	printf("ptr1 addrress:%p\nptr1 : %p\n*ptr1 : %f\n", &ptr1, ptr1, *ptr1);

	*(ptr1 + 1) = 3.0;
	
	printf("dates[1] = %f\n", dates[1]);
	
	printf("ptr2 addrress:%p\nptr2 + 3 : %p\n*ptr2 : %f\n", &ptr2, ptr2 + 3, *(ptr2 + 3));


	return 0;
}
