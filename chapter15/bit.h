/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : bit.h
#   Last Modified : 2019-04-27 17:41
#   Describe      :
#
# ====================================================*/

#ifndef BIT_H_
#define BIT_H_

typedef struct _font
{
	unsigned char font_id 	: 8;
	unsigned char font_size : 7;
	unsigned char 			: 1;
	unsigned char alignment : 2;	// 0 : left alignment, 1 : middle alignment, 2 : rights alignment;
	unsigned char bold		: 1;	// 0 : not bold, 1 : bold;
	unsigned char italic	: 1;	// 0 : not italic, 1 : italic;
	unsigned char underline : 1;	// 0 : not underline, 1 : underline;
} font;

int bin_to_dec(const char *sbin);
void bit_and(const char *s1, const char *s2);
void bit_or(const char *s1, const char *s2);
void bit_xor(const char *s1, const char *s2);
void bit_not(const char *s);
unsigned int rotate(unsigned int num, unsigned int offset);
void to_bin(int num);

void show_font(const font *pf);
void menu(void);
void chg_id(font *pf);
void chg_size(font *pf);
void chg_alig(font *pf);
void chg_bold(font *pf);
void chg_italic(font *pf);
void chg_underline(font *pf);

#endif
