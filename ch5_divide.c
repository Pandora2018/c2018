/* divide */
#include <stdio.h>

int main(void)
{
	int x = +21;		// x is modifiable left value
	const int y = -32;		// y is not modifiable left value
	/* printf("x = %+d,y = %+d\n", x, y);
	printf("x * x = %d\n", x * x); */

	printf("integer division:%d\n", y / x);	// result was truncation
	printf("float division:%f\n", 10.0 / 3.0);
	printf("mix division:%f\n", 10 / 3.0);	// 10 conversion double type

	return 0;

}
