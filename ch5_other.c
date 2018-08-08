/* other operator such as %,++,-- */

#include <stdio.h>

int main(void)
{
	int i, j, valume;

	/* printf("Enter two number:");
 	scanf("%d %d", &i, &j);

	valume = i % j;

	printf("%d %% %d = %d\n", i, j, valume); */

	/* increment operator and decrement operator */
	int n = 10;

	printf("n	n^2\n");
	printf("----------------\n");

	while (n-- > 0)
	{
		valume = n * n;
		printf("%d	%d\n", n, valume);
	}

	return 0;
	
}
