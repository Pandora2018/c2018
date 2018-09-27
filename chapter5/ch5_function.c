/* nature_num ----- print some nature numbers */

#include <stdio.h>

/* function prototype */
void nature_num(int number);
void odd_num(int number);
void even_num(int number);

int main(void)
{
	// int times = 30;
	char ch = 'a';
	// float real_num = 42.12f;
	
	nature_num(ch);		// "20" is argument
	nature_num(20);
	odd_num(48);
	even_num(48);

	return 0;

}

void nature_num(int number)		// "number" is parameter
{
	// int count = 0;

	printf("nature number:");
	printf("%d ", number);

	while (number-- > 1)
		printf("%d ", number);

	printf("\n");

}

void odd_num(int number)		// "number" is parameter
{
	int count = 0;
	
	printf("%d inner odd num:", number);

	while (number)
	{
		if (number % 2 != 0)
		{
			printf("%d ", number);
			count++;
		}

		number--;
	}
	
	printf("\nodd number is %d", count);
	printf("\n");

}

void even_num(int number)		// "number" is parameter
{
	int count = 0;
	
	printf("%d even num:", number);

	while (number)
	{
		if (number % 2 == 0)
		{
			printf("%d ", number);
			count++;
		}

		number--;
	}
	
	printf("\neven number is %d", count);
	printf("\n");

}
