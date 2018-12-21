
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : str.h
#   Last Modified : 2018-12-21 19:15
#   Describe      : string symbol constant and string function prototype
#
# ====================================================*/

#define ANIMALS "mickey mouse"
#define PASSWORDS "this ok!"
#define STLEN 50
#define SIZE 10

char * s_gets(char * str, int n);
void take_s(char * pc, int n);
char * take_word(char * word);
char * find_ch(char * str, char ch);
int is_within(char * str, char ch);
char * strncopy(char * desc, char * src, int n);
char * string_in(char * str, char * find);
void str_inversal(char * str);
void del_space(char * str);
