#include "demo.h"

double fibonacci(unsigned int n)
{
	if ( n > 2)
		// double recursion
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		return 1;
}
