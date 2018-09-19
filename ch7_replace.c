#include <stdio.h>

void rep_spec_char();


int main(void)
{
	rep_spec_char();

	return 0;
}


void rep_spec_char(void)
{
	int count = 0;
	char ch;

	printf("enter char ro screen:\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			count++;
		}else if (ch == '!')
		{
			putchar(ch);
			putchar(ch);
			count++;
		}else
			putchar(ch);
	}
	
	putchar('\n');
	printf("replace time is %d", count);
}
