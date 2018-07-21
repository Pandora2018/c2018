#include <stdio.h>

int main(void)
{
	int count;
	double assets;
	char products[100];
	unsigned char age;
	size_t length;

	printf("enter value:");
	int total = scanf("%5lf %s", &assets, products);

	printf("assets:%5.2f,products:%s\n",
			assets, products);
	printf("scanf() function return %d input date\n", total);

	// print EOF value(EOF = end of file)
	printf("EOF value:%d\n", EOF);
	
	return 0;

}
