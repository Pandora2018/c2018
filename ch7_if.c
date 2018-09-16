#include <stdio.h>
 
void readChar(void);

int main(void)
{
	readChar();

	return 0;
}


void readChar(void)
{
	char ch;

	printf("enter some char to screen:\n");

	while ((ch = getchar()) != '\n')
	{
		if (' ' == ch) 
			putchar(ch);
		else
			putchar(ch+1);
	}

	putchar(ch);
}
