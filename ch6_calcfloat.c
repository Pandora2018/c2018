#include <stdio.h>

void calc(void);

int main(void)
{
	calc();

	return 0;
}

void calc(void)
{
	double d1, d2, result;

	printf("Enter two double float:");

	while (scanf("%lf %lf", &d1, &d2) == 2)
	{
		result = (d1 - d2) / (d1 * d2);
		printf("d1 = %.2f;d2 = %.2f;result = %.2f\n", d1, d2, result);

		printf("Enter two double float:");
	}
}
