#include <stdio.h>
 
double calc_queue(int counts);
double calc_queue_2(int counts);

int main(void)
{
	int counts;

	printf("enter counts:");
		
	while (scanf("%d",&counts), counts > 0)
	{
		double total = calc_queue(counts);
		printf("result:%.10f\n", total);
		printf("\n");
		printf("enter counts:");
	}
	
	printf("Done!\n");

	return 0;
}

double calc_queue(int counts)
{
	double sum = 0.0;

	for (int term = 1; term <= counts; term++)
		sum += (1 / (double)term);

	return sum;
}

double calc_queue_2(int times)
{
	double sum = 0.0;
	int counts, flag;

	for (counts = 1, flag = 1; counts <= times; counts++)
	{
		sum += flag * 1.0 / (double)counts;	
		flag *= -1;
	}
	
	return sum;
}
