#include <stdio.h>
#include <string.h>

void words(void);

int main(void)
{
	words();

	return 0;
}

void words(void)
{
	char word[20];

	printf("Please a word:");
	scanf("%s", word);

	int len = strlen(word);

	for (int index = (len - 1); index >= 0; index--)
		printf("%c", word[index]);
}
