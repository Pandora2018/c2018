/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : nest_struct.c
#   Last Modified : 2019-03-17 19:23
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(void)
{
	struct friends
	{
		struct names name;
		float weight;
		float length;
	};

	struct friends davied =
	{
		{"davied", "jason"},
		50.00,
		1.75
	};

	printf("address davied : %p; davied.name.first : %p\n",
			&davied, &davied.name.first);

	struct friends *him = &davied;

	struct friends * pf = (struct friends *)malloc(sizeof(struct friends) * 100);

	/*
	 * printf("sizeof(struct friends *) : %zd Byte\n",
	 *         sizeof(struct friends *));
	 */

	printf("struct friends use memory %zx Byte\n", sizeof(struct friends));

	printf("pf : %p, pf + 1 : %p\n", pf, pf + 1);

	/* printf("my friends is %s %s, weight : %.2f, length : %.2f\n", 
	 * (him -> name).first, (him -> name).last, 
	 * him -> weight, him -> length); 
	 */

	printf("my friends is %s %s, weight : %.2f, length : %.2f\n", 
			(*him).name.first, (*him).name.last, 
			(*him).weight, (*him).length);

	return 0;
}
