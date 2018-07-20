#include <stdio.h>

int main(void)
{
	int count;
	long double assets;
	char products[100];
	unsigned char age;
	size_t length;

	printf("enter value:");
	int total = scanf("%d%Lf%s%hhu%zd", &count, &assets, products, &age, &length);

	printf("count=%d,asset=$%.2Lf,products:%s,age=%hhu,length=%zd\n",
			count, assets, products, age, length);
	printf("scanf() function return %d input date", total);
	

	return 0;

}
