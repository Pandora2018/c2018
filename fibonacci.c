#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{

	unsigned int n;

	printf("enter value:");
	scanf("%u", &n);

	unsigned long long int value = fibonacci(n);

	printf("%u fibonacci number:%llu\n", n, value);

	return 0;

}

unsigned long long int fibonacci(unsigned int n)
{
	if ( n >= 3)
	{
		unsigned long long int value = fibonacci(n - 1) + fibonacci(n - 2);
		return value;
	}else
	{
		return 1;
	}
}
