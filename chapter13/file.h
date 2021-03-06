/* ====================================================
#   Copyright (C)2019 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : file.h
#   Last Modified : 2019-03-13 09:20
#   Describe      :
#
# ====================================================*/

void mk_real(void);
void mktext(void);
void copy_file(const char *sour_file, const char *dest_file);
void cp_file(void);
void seq_print(FILE *first_file, FILE *sec_file);
long int report_char(char ch, FILE *fp);
char * show_file(long int pos, FILE *fp);
long int show_line(const char *str, FILE *fp);
