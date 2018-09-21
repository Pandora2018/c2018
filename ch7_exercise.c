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
	long int num, s_odd, s_even;
	int c_odd, c_even;

	s_odd = s_even = 0;
	c_odd = c_even = 0;
	
	printf("Please input number from keyword to screen:\n");

	while (scanf("%ld", &num) == 1)
	{
		if (0L == num)
		{
			printf("num is is_zero\n");
			break;
		}

		if (num % 2 == 0) 
		{
			s_even += num;
			c_even++;
		}else
		{
			s_odd += num;
			c_odd++;
		}
			
		printf("next number:\n");
	}			

		printf("odd number :%d,s_odd:%ld,average:%.2f\n", c_odd, s_odd, 1.0 * s_odd / c_odd);
		printf("even number:%d,sum even:%ld,average:%.2f\n", c_even, s_even, 1.0 * s_even / c_even);

}
