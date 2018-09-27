#include <stdio.h>

#define LENGTH 12

void operator_arr(void);
int power(int base, int exp);

int main(void)
{
	operator_arr();

	return 0;
}

void operator_arr(void)
{
	int arr[LENGTH];
	int index = 0;

	// initialise array
	for (int offset = 0; offset < LENGTH; offset++)
			arr[offset] = power(2, offset);

	// show array all elements on the screen
	printf("display all elements:\n");
	
	do
	{
		printf("arr[%02d] = %d\n", index, arr[index]);
		index++;
	} while (index < LENGTH);
}

int power(int base, int exp)
{
	int total = 1;

	if (exp == 0)
		return 1;
		// return total;
	else
	{
		for (int count = 0; count < exp; count++)
			total *= base;
	}

	return total;
}
