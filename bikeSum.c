#include <stdio.h>

int bikeSum(int month);

int main(void)
{
   	int total = bikeSum(12);

	printf("12 months late ,bike total is %d\n", total);

    return 0;

}

int bikeSum(int month)
{
	if (month != 1)
	{
		int sum =bikeSum(month -1) + month;
		return sum;
	} else {
		return 1;
	}

}
