/* this program use loop exersice and array exercise */

#include <stdio.h>

#define LENGTH 6

void input_array(int length);
void ouput_array(void);

char arr[LENGTH];

int main(void)
{
	input_array(LENGTH);
	ouput_array();

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
	printf("show array all elemnts:\n");

	for (int index = 0; index < LENGTH; index++)
		printf("arr[%d] = %c\n", index, arr[index]);	
}
