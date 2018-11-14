
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : array.h
#   Last Modified : 2018-11-14 18:26
#   Describe      :
#
# ====================================================*/

#define MONTH 12
#define SIZE 4
#define LENGTH 6
#define ROWS 3
#define COLS 4

double arrSum(const double *, const double *);
void indexOver(void);
void arinit(int);
void getadd(const float [][4], int);

int max(const int [], int);
int max_loc(const int [], int);
void min_and_postion(const int *, int *, int);

void cp_arr(const double [], double [], int);
void cp_point(double *, const double *, const double *);
void sh_arr(const double *, const double *);

void cp_ar(const double (* )[COLS], double (* )[COLS]);
