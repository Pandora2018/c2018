/*
 * the file was <<c primer plus>> chapter6 all exercise
 */

#include <stdio.h>

void letters(void);
void show_$(void);
void show_letter(void);
void show_alph(void);
void pyramid_alphabet(void);

int main(void)
{
	// letters();
	// show_$();
	// show_letter();
	// show_alph();
	pyramid_alphabet();

	return 0;
}

void letters(void)
{
	char letter = 'a';
	char letters[26];
	int index = 0;

	while (index < 26)
	{
		letters[index] = letter;	
		index++;
		letter++;
	}

	// printf all letters
	printf("all letters:\n");

	for (index = 0; index < 26; index++)
	{
		printf("%c", letters[index]);	
	}
}

void show_$(void)
{
	const int ROWS = 6;
	int row, num;

	printf("below some $ symbol:\n");

	for (row = 1; row <= ROWS; row++)
	{
		for (num = 1; num <= row; num++)
			printf("$");	

		printf("\n");
	}
}

void show_letter(void)
{
	char ch;
	
	// i means row and j means coloum
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1, ch = 'F'; j <= i; j++)
			printf("%c", ch--);	

		printf("\n");
	}
}

void show_alph(void)
{
	char ch = 'A';

	for (int line = 0; line < 6; line++)
	{
		for (int j = 0; j < line + 1; j++)
			printf("%c", ch++);

		printf("\n");
	}
}

void pyramid_alphabet(void)
{
	char alph;

	scanf("%c", &alph);



}
