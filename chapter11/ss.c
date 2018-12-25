/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : ss.c
#   Last Modified : 2018-12-25 08:42
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
	char in;
	char * pa = argv[1];
	char * pu, * pl;

	while (*pa != '\0') {
		if (isalpha(*pa)) {
			in = *pa;
			break;
		}
		pa++;
	}

	switch (in) {
		case 'p':
			for (int i = 2; i < argc; i++)
				puts(argv[i]);
			break;
		case 'u':
			for (int j = 2; j < argc; j++) {
				pu = argv[j];
				do {
					if (islower(*pu))
						putchar(toupper(*pu));
					else if (isspace(*pu))
						putchar(' ');
				} while (*++pu != '\0');
				putchar(' ');
			}
			break;
		case 'l':
			for (int k = 2; k < argc; k++) {
				pl = argv[k];
				while (*pl != '\0') {
					if (isupper(*pl))
						putchar(tolower(*pl));
					else if (isspace(*pl))
						putchar(' ');
					pl++;
				}
				putchar(' ');
			}
			break;
		default:
			return 0;
	}

	return 0;
}
