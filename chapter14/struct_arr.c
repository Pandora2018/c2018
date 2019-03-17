/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : struct_arr.c
#   Last Modified : 2019-03-17 11:30
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(void)
{
	struct car jeep[2];
	/* struct car *p = (struct car *)malloc(sizeof(struct car) * 10); */

	for (int i = 0; i < 2; ++i)
	{
		printf("enter brand and color :\n");
		scanf("%s %s", jeep[i].brand, jeep[i].color);

		/* while (getchar() != '\n') continue; */

		printf("enter length and width and height :\n");
		scanf("%f %f %f", &jeep[i].length, &jeep[i].width, &jeep[i].height);
	}

	printf("%c\n", jeep[1].brand[3]);

	for (int i = 0; i < 2; ++i)
	{
		printf("brand : %s, color : %s, length : %.2f, width : %.2f, height : %.2f\n",
				jeep[i].brand, jeep[i].color, jeep[i].length, jeep[i].width, jeep[i].height);
	}

	return 0;
}
