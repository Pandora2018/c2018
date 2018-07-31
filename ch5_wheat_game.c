#include <stdio.h>
#define SQUARE 64

int main(void)
{
	const double MASS = 0.035;
	int days = 1;
	double current, total;
	current = total = 1.0;

	printf("----------------------------------\n");
	printf("|days\tcurrent\ttotal|\n");
	printf("----------------------------------\n");

	while (days <= SQUARE)
	{
		if (days == 1)
		{
			printf("|%02d\t%-23.f\t%-23.f|\n", 
					days, current, total);
		} else
		{
			current = current * 2;
			total = total + current;
			printf("|%02d\t%-23.f\t%-23.f|\n", 
					days, current, total);
		}

		days = days + 1;
	}

	printf("----------------------------------\n");
	printf("wheat total mass:%.4e T\n", total * MASS / 1000000);

	return 0;

}
