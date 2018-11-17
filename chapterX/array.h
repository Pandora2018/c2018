
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : array.h
#   Last Modified : 2018-11-17 11:47
#   Describe      :
#
# ====================================================*/

#define MONTH 12
#define SIZE 4
#define LENGTH 6
#define ROWS 10
#define COLS 15

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

void mkd_arr(int rows, int cols, double ar[rows][cols]);
void copyd_arr(int rows, int cols, const double source[rows][cols], double target[rows][cols]);
void shd_arr(int rows, int cols, const double ar[rows][cols]);

void ard_add(int rows, int cols, const double addend[rows][cols], const double summend[rows][cols], double answer[rows][cols]);

void getd_arr(int rows, int cols, double ar[rows][cols]);
double ard_avg(int n, double ar[n]);
double ard_all_avg(int rows, int cols, double ar[rows][cols]);
double getd_max(int rows, int cols, double ar[rows][cols]);
double getd_min(int rows, int cols, double ar[rows][cols]);

void ard_inverse(int n, double ar[n]);
