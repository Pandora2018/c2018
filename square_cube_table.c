#include <stdio.h>

double power(int base, int exp);
void display_table(void);

int main(void)
{
	display_table();

	return 0;
}

double power(int base, int exp)
{
	double result = 1;

	for (int count = 0; count < exp; count++)	
	{
		result *= base;	
	}

	return result;
}

void display_table(void)
{
	int start, end;

	printf("enter two integer:");

	while (scanf("%d %d", &start, &end) == 2)
	{
		printf("%2c %10s %10s\n", 'n', "n^2", "n^3");
		printf("===========================\n");

		for (int count = start; count <= end; count++, start++)
		{
			printf("%2d%12.2f%12.2f\n", start, power(start, 2), power(start, 3));
		}

		printf("===========================\n");

		printf("enter two integer:");
	}
}
