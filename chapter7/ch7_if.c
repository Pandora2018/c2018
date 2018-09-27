#include <stdio.h>
 
void readChar(void);

int main(void)
{
	// readChar();
	char str[50] = "apple watch iphone ipad";

	int index = 0;

	// while (str[index] != '\0')
	while (str[index])
	{
		if (str[index] != '\0')
			printf("%c", str[index]);
			// putchar(str[index]);
		else
		{
			printf("index:%d\n", index);
			break;
		}

		index++;
	}

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
