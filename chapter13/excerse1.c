/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : excerse1.c
#   Last Modified : 2019-03-02 10:33
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char filename[64];
	
	puts("Enter file name:");
	scanf("%s", filename);

	if ((fp = fopen(filename, "r")) == NULL)
	{
		puts("File not exit or file open failure");
		exit(EXIT_FAILURE);
	}

	char line[256];

	/* while ((ch = getc(fp)) != EOF) */
	while (fgets(line, 256, fp) != NULL)
	{
		/* putc(ch, stdout); */
		fputs(line, stdout);
	}
	
	fclose(fp);

	return 0;
}
