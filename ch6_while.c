/*
 * this program use test while loop
 */

#include <stdio.h>

void not_numeral_postion(void);

int main(void)
{
	not_numeral_postion();

	return 0;

}

void not_numeral_postion(void)
{
	/* the funtion providing skip input area all numeral and space character,and reading a character */

	long int numeral;
	char letter;

	printf("Please input some data:");

	while (scanf("%ld", &numeral) == 1)
		;	/* null statement:do nothing */
	
	scanf("%c", &letter);

	printf("letter is %c\n", letter);

}
