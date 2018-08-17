/* chapter5 all exercise 8 */

#include <stdio.h>

#define DISTANCE 10
#define DAYS_PER_YEAR 360
#define DAYS_PER_MONTH 30
#define DAYS_PER_WEEK 7
#define SEC_PER_HOUR 3600
#define SEC_PER_MINUTE 60

void add10();	// function prototype
double real_num_cube(void);
void data_convert(unsigned int days);
void time_convert(unsigned int second);

int main(void)
{
	// add10();
	// printf("cube is %.3f\n", real_num_cube());
	data_convert(120478);
	time_convert(489756322);
	
	return 0;

}

void add10()
{
	int start_num, count;
	count = 0;

	printf("enter numa:");
	scanf("%d", &start_num);

	while (count++ < 11)
	{
		printf("%d ", start_num);
		start_num++;
	}

	printf("\nOK....\n");

}

double real_num_cube(void)
{
	double real_num, result;
	
	printf("enter a real number(<= to quiet):");
	scanf("%lf", &real_num);

	result = real_num * real_num * real_num;

	return result;

}

void data_convert(unsigned int days)
{
	unsigned int year, month, weekday, day;

	year = days / DAYS_PER_YEAR;
	month = days % DAYS_PER_YEAR / DAYS_PER_MONTH;
	weekday = days % DAYS_PER_YEAR % DAYS_PER_MONTH / DAYS_PER_WEEK;
	day = days % DAYS_PER_YEAR % DAYS_PER_MONTH % DAYS_PER_WEEK;

	printf("%u days convert to %03u years %02u month %02u week %03u day\n",
			days, year, month, weekday, day);

}

void time_convert(unsigned int second)
{
	unsigned int hour, minute, sec;

	hour = second / SEC_PER_HOUR;
	minute = second % SEC_PER_HOUR / SEC_PER_MINUTE;
	sec = second % SEC_PER_HOUR % SEC_PER_MINUTE;

	printf("%u second:%uh%um%u\n", second, hour, minute, sec);

}
