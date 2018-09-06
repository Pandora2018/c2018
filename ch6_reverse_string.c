#include <stdio.h>

#define SIZE 10

void reverse_string(void);

int main(void)
{
	reverse_string();

	return 0;
}

void reverse_string(void)
{
	char str[255];

	printf("enter a line string:\n");

	for (int count = 0; count < SIZE; count++)
		scanf("%c", &str[count]);

	for (int offset = (SIZE - 1); offset >= 0; offset--)
		printf("%c", str[offset]);
}
