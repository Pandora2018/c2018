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

int bin_to_dec(const char *sbin);
void bit_and(const char *s1, const char *s2);
void bit_or(const char *s1, const char *s2);
void bit_xor(const char *s1, const char *s2);
void bit_not(const char *s);
unsigned int rotate(unsigned int num, unsigned int offset);
void to_bin(int num);
