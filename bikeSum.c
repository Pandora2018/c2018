#include <stdio.h>

int bikeCount(int month);

int main(void)
{
	unsigned short int months;
	
	printf("enter priduct months(1 to 999):");
	scanf("%hu", &months);
	
   	unsigned int total = bikeCount(months);

	printf("%hu months late,bike total are %u\n", months, total);

    return 0;

}

int bikeCount(int month)
{
	if (month != 1)
	{
		int sum =bikeCount(month - 1) + month;
		return sum;
	} else
	{
		return 1;
	}

}
