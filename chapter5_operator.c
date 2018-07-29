#include <stdio.h>

int main(void)
{
	int x = 21;		// x is modifiable left value
	const int y = 32;		// y is not modifiable left value

	int z = x + y;		// z also modifiable left value
	
	double d1, d2, d3;
	d1 = d2 = d3 = 3.1415926;

	printf("z=%d\n", z);
	printf("d1 = d2 = d3 = %e\n", d1);

	// while loop test
	unsigned int sum = 0, i = 1;
	while (i <=100)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf("1+2+...+100=%u\n", sum);

	// print ten line *******
	int count = 1;
	while (count <= 10) // test logic
	{ // loop start and loop block
		printf("%02d***************\n", count);
		count++;
	} // loop end

	return 0;

}
