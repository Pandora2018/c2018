/*
 * The program use test relational operator
 */

#include <stdio.h>

void show_alphabet(void);
void compare(void);
void display_ansii(void);

int main(void)
{
	// show_alphabet();	
	// compare();
	display_ansii();

	return 0;

}

void show_alphabet(void)
{
	char letter = 'A';

	while (letter <= 'Z')
		printf("%c ", letter++);	
	
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
		printf("%c ", id--);

	printf("\n");

}
