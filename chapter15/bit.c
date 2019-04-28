/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit.c
#   Last Modified : 2019-04-27 17:41
#   Describe      :
#
# ====================================================*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include "bit.h"

int bin_to_dec(const char *sbin)
{
	int res = 0;
	int len = strlen(sbin);
	int tmp[len];

	for (int i = 0; i < len; ++i)
		tmp[i] = sbin[i] - '0';

	int e = 0;
	for (int j = len - 1; j >= 0; --j, ++e)
		res += tmp[j] * pow(2, e);

	return res;
}

void bit_and(const char *s1, const char *s2)
{
	for (int j = 0; j < strlen(s1); ++j)
	{
		if (s1[j] == '1' && s2[j] == '1')
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_or(const char *s1, const char *s2)
{
	for (int i = 0; i < strlen(s1); ++i)
	{
		if (s1[i] == '1' || s2[i] == '1')
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_xor(const char *s1, const char *s2)
{
	for (int i = 0; i < strlen(s1); ++i)
	{
		if (s1[i] != s2[i])
			printf("1");
		else
			printf("0");
	}

	return;
}

void bit_not(const char *s)
{
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] == '1')
			printf("0");
		else
			printf("1");
	}

	return;
}

unsigned int rotate(unsigned int num, unsigned int offset)
{
	int mask;

	for (int i = 1; i <= offset; ++i)
	{
		mask = (num & 0x80) >> 7;
		num <<= 1;
		num ^= mask;
	}

	return num;
}

void to_bin(int num)
{
	for (int i = 1; i <= CHAR_BIT; ++i)
	{
		if (num & 0x80)
			putchar('1');
		else
			putchar('0');

		num <<= 1;

		if (i % 4 == 0)
			putchar(' ');
	}

	return;
}

void show_font(const font *pf)
{
	printf("%3s %4s %9s %3s %3s %3s\n",
			"ID", "SIZE", "ALIGNMENT", "B", "I", "U");

	printf("%3hhu %4hhu %9s %3s %3s %3s\n",
			pf->font_id,
			pf->font_size,
			pf->alignment == 0 ? "left" : (pf->alignment == 1 ? "center" : "right"),
			pf->bold == 0 ? "off" : "on",
			pf->italic == 0 ? "off" : "on",
			pf->underline == 0 ? "off" : "on");

	return;
}

void menu(void)
{
	printf("d) Change id; s) Change size; a)Change alignment;\n");
	printf("b) Toggle bold; i) Toggle italic; u) Toggle underline;\n");
	printf("q) Quit\n");

	return;
}

void chg_id(font *pf)
{
	unsigned char id;

	printf("Enter font id (0-255) : ");
	scanf("%hhu", &id);
	
	pf->font_id = id;

	return;
}

void chg_size(font *pf)
{
	unsigned char size;
	
	printf("Enter font size (0-127) : ");
	scanf("%hhu", &size);

	pf->font_size = size;

	return;
}

void chg_alig(font *pf)
{
	char align;
	getchar();		// delete \n character from buffer

	printf("l) left  c) center  r) right\n");
	printf("Select alignment : ");
	align = getchar();

	switch (align)
	{
		case 'l': pf->alignment = 0; break;
		case 'c': pf->alignment = 1; break;
		case 'r': pf->alignment = 2; break;
	}

	return;
}

void chg_bold(font *pf)
{
	unsigned char bold;	

	printf("Isn't bold ? : ");
	scanf("%hhu", &bold);

	pf->bold = bold;

	return;
}

void chg_italic(font *pf)
{
	unsigned char italic;

	printf("Isn't italic : ");
	scanf("%hhu", &italic);

	pf->italic = italic;

	return;
}

void chg_underline(font *pf)
{
	unsigned char underline;

	printf("Isn't underline : ");
	scanf("%hhu", &underline);

	pf->underline = underline;

	return;
}
