#include <stdio.h>

void colltaz(void);


int main(void)
{
	colltaz();

	return 0;
}


void colltaz(void)
{
	long long int num, count = 0LL;
	int line = 1;
	
	printf("Please input a integer:");
	scanf("%lld", &num);

	printf("%03d:", line);

	while (num != 1)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			count++;
			printf("%lld ", num);
		}else
		{
			num = 3 * num + 1;
			count++;
			printf("%lld ", num);
		}

		if (count % 10 == 0)
		{
			putchar('\n');
			++line;
			printf("%03d:", (line - 1) * 10 + 1);
		}
	}
	
	printf("\n---------------------\n");
	printf("%lld times after num value is 1\n", count);
}
