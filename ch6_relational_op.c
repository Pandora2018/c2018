/*
 * The program use test relational operator
 */

#include <stdio.h>
#include <stdbool.h>

void show_alphabet(void);
void compare(void);
void display_ansii(void);

int main(void)
{
	show_alphabet();	
	// compare();
	// display_ansii();

	return 0;

}

void show_alphabet(void)
{
	char letter = 'A';
	bool compare_result = (letter <= 'Z');

	while (compare_result)
	{
		printf("%c ", letter);	
		compare_result = (++letter <= 'Z');
	}
	
	printf("\n");
}

void compare(void)
{
	int numeral = 65;
	float f_num = 65.0f;
	double d_num = 65.0;
	char ch = 'A';

	printf("compare result is %d", f_num == ch);
	printf("\n");

}

void display_ansii(void)
{
	int id = 127;
	
	while (id)
	{
		printf("%d:%c ", id, id);
		id--;
	}

	printf("\n");

}
