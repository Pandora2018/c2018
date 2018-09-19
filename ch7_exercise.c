#include <stdio.h>

void guess(void);

int main(void)
{
	guess();
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
