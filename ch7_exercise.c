#include <stdio.h>

void guess(void);
void char_to_ascii(void);
void calc_odd_even(void);

int main(void)
{
	/* guess(); */
	/* char_to_ascii(); */
	calc_odd_even();
	return 0;
}


void guess(void)
{
	int space_num, line_num, other_num;
	space_num = line_num = other_num = 0;

	char ch;
	printf("enter some character to screen:\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			space_num++;
		else if(ch == '\n')
			line_num++;
		else
			other_num++;
	}

	printf("space_num times were %d\n", space_num);
	printf("line_num times were %d\n", line_num);
	printf("other_num times were %d\n", other_num);
}


void char_to_ascii(void)
{
	char ch;

	printf("enter some char:\n");
	
	for (int i = 1; (ch = getchar()) != '#'; i++)
	{
		printf("%c,%d  ", ch, ch);

		if (i % 8 == 0)
			putchar('\n');
	}
}


void calc_odd_even(void)
{
	unsigned long int num, sum_odd, sum_even;
	int count_odd, count_even;

	sum_odd = sum_even = 0;
	count_odd = count_even =0;
	
	printf("Please input number from keyword to screen:\n");

	while (scanf("%ld", &num) == 1)
	{
		/* if (0 == num)
			break; */

		if (num >= 1)
		{
			if (num % 2 == 0)
			{
				sum_even += num;
				count_even++;
			}else
			{
				sum_odd += num;
				count_odd++;
			}
		}else
		{
			printf("num = 0\n");
			break;
		}

		printf("next number:\n");
	}			

	printf("odd number :%d,sum_odd:%ld,average:%.4f\n", count_odd, sum_odd, 1.0 * sum_odd / count_odd);
	printf("even number:%d,sum even:%ld,average:%.4f\n", count_even, sum_even, 1.0 * sum_even / count_even);
}
