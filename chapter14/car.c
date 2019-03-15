/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : car.c
#   Last Modified : 2019-03-15 20:09
#   Describe      :
#
# ====================================================*/

#include <stdio.h>

int main(void)
{
	// struct declaration
	struct car // car is struct tag
	{ // member-list
		char brand[30];
		char color[20];
		float length;
		float width;
		float height;
	};

	// struct variable
	/* struct car jeep = {"bmw", "black", 4.5, 3.2, 0.8}; */
	struct car jeep =
	{
		.brand = "benzi",
		.color = "red",
		.length = 4.5,
		2.0,
		1.2,
	};

	struct car sport = {"BMW", "white", 5.0, 2.5, 1.0};

	struct car suv[] = {jeep, sport};

	for (int i = 0; i < sizeof(suv) / sizeof(suv[0]); ++i)
	{
		printf("My car brand : %s, color : %s, length :%.2f, width : %.2f, height : %.2f\n",
			suv[i].brand, suv[i].color, suv[i].length, suv[i].width, suv[i].height);
	}

	/*
	 * printf("suv[0] : %p\n", suv);
	 * printf("suv[1] : %p\n", suv + 1);
	 */

	/* printf("sizeof(suv) : %zd\n", sizeof(suv)); */

	/*
	 * printf("sizeof(struct car): %td\n", sizeof(struct car));
	 * printf("sizeof(jeep) : %zd\n", sizeof(jeep));
	 */

	/*
	 * printf("jeep address : %p\n", &jeep);
	 * printf("jeep.brand address : %p\n", &jeep.brand);
	 * printf("jeep.color address : %p\n", &jeep.color);
	 * printf("jeep.length address : %p\n", &jeep.length);
	 * printf("jeep.width address : %p\n", &jeep.width);
	 * printf("jeep.height address : %p\n", &jeep.height);
	 */

	printf("My car brand : %s, color : %s, length :%.2f, width : %.2f, height : %.2f\n",
			jeep.brand, jeep.color, jeep.length, jeep.width, jeep.height);

	return 0;
}
