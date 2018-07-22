#include <stdio.h>

int main(void)
{
	float value1 = 1.0 / 3.0;
	double value2 = 1.0 / 3.0;

	// variable precision:float bits after point
	unsigned int precision;

	printf("enter precision:");
	scanf("%u", &precision);
	printf("\
value1 is float  type,it's result:%.*f\n\
value2 is double type,it's result:%.*f\n",
precision, value1, precision, value2);

	return 0;

}
