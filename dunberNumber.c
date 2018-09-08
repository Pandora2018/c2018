#include <stdio.h>
 
int lookDunberFriends(void);

int main(void)
{
	int weeks = lookDunberFriends();

	printf("%d weeks after you friend more than dunber's number\n", weeks);

	return 0;
}


int lookDunberFriends(void)
{
	int weeks = 0, friends;

	printf("You friends number(>1):");
	scanf("%d", &friends);

	while (friends <= 150)
	{
		weeks++;
		friends = (friends - weeks) * 2;
		printf("%d weeks you have %-3d friends\n", weeks, friends);
	}

	return weeks;
}
