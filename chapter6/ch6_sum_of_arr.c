#include <stdio.h>
 
#define SIZE 5

void operator_arr(void);
int main(void)
{
	operator_arr();

	return 0;
}

void operator_arr(void)
{
	double arr1[SIZE], arr2[SIZE];
	double total = 0;

	printf("Enter %d double number to arr1:\n", SIZE);

	// initialise arr1
	for (int offset = 0; offset < SIZE; offset++)
		scanf("%lf", &arr1[offset]);

	for (int index = 0; index < SIZE; index++)
	{
		/* for (int offset = 0; offset <= index; offset++) */
			/* arr2[index] += arr1[offset]; */
		arr2[index] = total + arr1[index];
		total = arr2[index];
	}

	/* arr2[0] = arr1[0];

	for (int index = 1; index < SIZE; index++)
		arr2[index] = arr2[index - 1] + arr1[index]; */

	printf("----------------\n");

	// arr1 and arr2 all elements display on screen
	for (int offset = 0; offset <SIZE; offset++)
		printf("%5.f", arr1[offset]);

	printf("\n");

	for (int offset = 0; offset < SIZE; offset++)
		printf("%5.f", arr2[offset]);
}
