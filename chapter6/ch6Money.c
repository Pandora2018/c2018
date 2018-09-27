#include <stdio.h>

int compareMoney(void);
int drawMoney(void);

int main(void)
{
	/* int times = compareMoney();

	printf("accountDeirdre more than accountDaphne use time is %d years\n", times); */

	int times = drawMoney();

	printf("after %d years account money all use.\n", times);

	return 0;
}

int compareMoney(void)
{
	int years = 0;
	double accountDaphne, accountDeirdre;
	double money;

	printf("enter account(>=0.01):");

	scanf("%lf", &money);

	accountDaphne = accountDeirdre = money;

	do
	{
		accountDaphne += money * 0.1;
		accountDeirdre *= 1 + 0.05;
		/* accountDeirdre *= 1 + 0.1; */
		years++;
	} while (accountDaphne >= accountDeirdre);

	printf("accountDaphne:%.2f,accountDeirdre:%.2f\n", accountDaphne, accountDeirdre);

	return years;
}

int drawMoney(void)
{
	int years;
	double account, arrears;

	printf("enter money:");
	scanf("%lf", &account);

	do
	{
		account += account * 0.08;
		account -= 10;
		/* if (account <= 0) 
		{
			arrears = account;
			printf("if again use money,then You account not money!,arrears:%.2f\n", arrears);
			break;
		} */

		/* if (account < 20)
		{
			arrears = account;
			printf("account left money:%.2f\n", arrears);
			break;
		} */
		years++;
		printf("%02d years:account:%.2f\n", years, account);
	} while (account > 0);

	return years;
}
