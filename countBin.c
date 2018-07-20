#include <stdio.h>

unsigned long long int countBin(unsigned int n);

int main(void)
{

	unsigned int n;

	printf("enter value:");
	scanf("%u", &n);

	unsigned long long int value = countBin(n);

	printf("%u bit not contain zero number:%llu\n", n, value);

	return 0;

}

unsigned long long int countBin(unsigned int n)
{
	if (n >= 3)
	{
		unsigned long long int value = countBin(n - 1) + countBin(n - 2);
		return value;
	}else if(n == 1)
	{
		return 2;
	}else if(n == 2)
	{
		return 3;
	}
}
