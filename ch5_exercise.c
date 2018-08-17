/* chapter5 all exercise 8 */

#include <stdio.h>

#define DISTANCE 10

void add10();	// function prototype
double real_num_cube(void);

int main(void)
{
	add10();
	printf("cube is %.3f\n", real_num_cube());

	return 0;

}

void add10()
{
	int start_num, count;
	count = 0;

	printf("enter numa:");
	scanf("%d", &start_num);

	while (count++ < 11)
	{
		printf("%d ", start_num);
		start_num++;
	}

	printf("\nOK....\n");

}

double real_num_cube(void)
{
	double real_num, result;
	
	printf("enter a real number(<= to quiet):");
	scanf("%lf", &real_num);

	result = real_num * real_num * real_num;

	return result;

}
