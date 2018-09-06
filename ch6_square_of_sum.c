#include <stdio.h>

double calc(double down, double top);
 
int main(void)
{
	double down, top;

	do
	{
		printf("I wanted two integer,first number must less than second number:\n");
		scanf("%lf %lf", &down, &top);
		printf("%.f to %.f square of summer %.f\n", down, top, calc(down, top));
	} while (down < top);

	printf("Done!\n");

	return 0;
}

double calc(double down, double top)
{
	double sum = 0;

	for ( ; down <= top; down++)
	{
		sum += (down * down);
	}

	return sum;
}
