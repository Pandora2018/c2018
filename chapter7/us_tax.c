#include <stdio.h>
#include <stdbool.h>

#define SINGLE 	17850
#define HOUSEHOLDER	23900
#define MAR_SHARE 29750
#define MAR_SEPARATE 14875
#define RATE1 0.15
#define RATE2 0.28	

int tax(void);


int main(void)
{
	tax();

	return 0;
}


int tax(void)
{
	int type;
	double slary, tax;
	char ch;
	bool flag = true;

	while (flag)
	{
		printf("1.single\t\t\t2.householder\n");
		printf("3.marry share\t\t\t4.marry separate\n");
		printf("5.quite\n");
	
		printf("choocie type:");
		while ((ch = getchar()) == '\n') continue;

		switch (ch)
		{
			case '1':
				type = SINGLE;
				break;
			case '2':
				type = HOUSEHOLDER;
				break;
			case '3':
				type = MAR_SHARE;
				break;
			case '4':
				type = MAR_SEPARATE;
				break;
			case '5':
				printf("quite\n");
				return 0;
			default:
				break;
		}
		
		printf("enter you slary:");
		scanf("%lf", &slary);
		printf("slary:%.2f\n", slary);
		
		tax = (slary <= type) ? slary * RATE1 : type * RATE1 + (slary -type) * RATE2;

		printf("tax:%.2f\n", tax);

		printf("Please keep choocie type....\n");
	}

	return 0;
}
