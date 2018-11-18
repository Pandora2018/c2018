
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : string_init.c
#   Last Modified : 2018-11-18 14:19
#   Describe      : string init and declared
#
# ====================================================*/

#include <stdio.h>
#include "str.h"

int main(void)
{
	// define character array
	char animal[20] = "mickey mouse";
	
	// define character point type
	const char * ptr = "mickey mouse";

	// string array
	const char * fruits[3] = {"apple", "pear", "banana"};
	char fruit[3][10] = {"apple", "pear", "banana"};

	printf("address of \"mickey mouse\" : %p\n", "mickey mouse");
	printf("address of ANIMALS : %p\n", ANIMALS);
	printf("address of animal : %p\n", animal);
	printf("address of ptr : %p\n", ptr);
	printf("address of \"mickey mouse\" : %p\n", "mickey mouse");
	
	putchar('\n');
	printf("animal array use %zd Byte memory\n", sizeof(animal));
	printf("*ptr use %zd Byte memory\n", sizeof(*ptr));
	printf("fruits use %zd Byte memory\n", sizeof(fruits));
	printf("fruits use %zd Byte memory\n", sizeof(fruit));

	// test puts function
	puts(*(fruits + 2));

	for (int i = 0; i < 3; i++)
		printf("fruits[%d] : %p\n", i, fruits + i);

	/*
	 * for (int j = 0; j < 3; j++){
	 *     puts(*(fruits + j));
	 * }
	 */
	
	return 0;
}
