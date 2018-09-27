/* divide */
#include <stdio.h>
#include <string.h>

int main(void)
{
	int x = +21;		// x is modifiable left value
	const int y = -32;		// y is not modifiable left value
	/* printf("x = %+d,y = %+d\n", x, y);
	printf("x * x = %d\n", x * x); */

	printf("integer division:%d\n", y / x);	// result was truncation
	printf("float division:%f\n", 10.0 / 3.0);
	printf("mix division:%f\n", 10 / 3.0);	// 10 conversion double type

	/* sizeof operator test */
	char products[] = "ipad,iphone,apple watch";
	int str_length = strlen(products);
	size_t byte = sizeof(products);

	printf("products has %d letters,and use %zd memory cells\n", str_length, byte);
	printf("char:%zdByte\nunsigned char:%zdByte\nsigned char:%zdByte\n",
			sizeof(char), sizeof(unsigned char), sizeof(signed char));

	unsigned long long int num[] = {10,20,30};

	printf("num array has %zdByte memory cells\n", sizeof(num));

	return 0;

}
