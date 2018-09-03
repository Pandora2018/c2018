/* this program use loop exersice and array exercise */

#include <stdio.h>

#define LENGTH 6
#define ASCII_CODE 	128

void input_array(int length);
void ouput_array(void);
void display_ascii_code(void);

char arr[LENGTH];

int main(void)
{
	input_array(LENGTH);
	ouput_array();
	/* display_ascii_code(); */

	return 0;
}

void input_array(int length)
{
	printf("enter %d char number:\n", length);
	
	for (int index = 0; index < length; index++)
		scanf("%c", &arr[index]);	

	printf("\n");
}

void ouput_array(void)
{
	printf("display all elemnts:\n");

	for (int index = LENGTH - 1; index >= 0; index--)
		printf("arr[%d] = %c\n", index, arr[index]);	
}

void display_ascii_code(void)
{
	int code_id;

	for (printf("display_ascii_code:\n"), code_id = 0; code_id < ASCII_CODE; code_id++)
		printf("%d -- %c\t", code_id, code_id);	
}
