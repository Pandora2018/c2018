/* chapter5 all exercise 8 */

#include <stdio.h>

void add10();	// function prototype
double real_num_cube(void);

int main(void)
{
	// add10();
	printf("cube is %.3f\n", real_num_cube());

	return 0;

}

void add10()
{
	int under_num, top_num;

	printf("enter num(<=0 to quiet):");
	scanf("%d", &under_num);

	top_num = under_num + 10;

	while (under_num > 0)
	{
		printf("%d ", under_num++);

		if (under_num > top_num)
			break;	
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
