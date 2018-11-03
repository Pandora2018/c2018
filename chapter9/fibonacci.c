
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fibonacci.c
#   Last Modified : 2018-11-03 19:12
#   Describe      : fibonacci num 
#
# ====================================================*/


double recur_fibo(unsigned int n)
{
	if ( n > 2)
		// double recursion
		return recur_fibo(n - 1) + recur_fibo(n - 2);
	else
		return 1;
}


double fbnacci(int n)
{
	double value;
	int f1, f2;
	f1 = f2 = 1;

	for(int i = 1; i <= n; i++){
		if(1 == i || 2 == i)
			value = 1.00;

		if(i > 2){
			value = f1 + f2;
			f1 = f2;
			f2 = value;
		}
	}

	return value;
}
