#include <stdio.h>

double fibonacci(unsigned int);

int main(void)
{

	unsigned int n;

	printf("enter value:");
	scanf("%u", &n);

	double value = fibonacci(n);

	printf("%u fibonacci number:%.f\n", n, value);

	return 0;

}


double fibonacci(unsigned int n)
{
	if ( n > 2)
		// double recursion
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		return 1;
}
