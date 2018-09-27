#include <stdio.h>

int main(void)
{
	// mix data type operator
	int price, num, count;	// not expression

	price = 2.3 + 3;	// price = 5,expression value is double,and value demotion is int
	num = (int)3.6 + (int)4.9;	// num = 7
	
	count = 26;		// it's a expression
	double d1 = (double)count;

	printf("price = %d,num = %d,d1 = %2.2f\n", price, num, d1);

	12000;	// 12000 is simple expression
	;		// null statement
	12 + 21;

	char letter = 'Q';
	int sort = (int)letter + 12;
	
	printf("letter = %c,sort = %c and sort = %d\n", letter, sort, sort);

	// test compound statement
	int index = 0;

	while (index++ < 10)
	{
		printf("%d  ", index);	
	}

	return 0;
	
}
