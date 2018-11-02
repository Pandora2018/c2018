
/* ====================================================
#   Copyright (C)2018 All rights reserved.
#
#   Author        : Pandora
#   Email         : pandora@github.com
#   File Name     : fibonacci.c
#   Last Modified : 2018-11-02 10:13
#   Describe      : fibonacci num 
#
# ====================================================*/


double fibonacci(unsigned int n)
{
	if ( n > 2)
		// double recursion
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		return 1;
}
