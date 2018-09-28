#include <stdio.h>
#include <stdbool.h>

#define K_THISTLE 1.25
#define BEER 0.65
#define CARROT 0.89
#define SALES 100
#define R_SALSE 0.05
#define F_POUND 5
#define F_COST 3.50
#define TW_POUND 20
#define TW_COST 10.00

int goods_order(void);


int main(void)
{
	goods_order();

	return 0;
}


int goods_order(void)
{
	float p_thistle, p_beer, p_carrot;
	float pound;		// all pound
	float t_cost, b_cost, c_cost;
	float order_cost;	// order all cost
	float sales_cost;
	float trans_cost;
	float total;		// all cost
	char in;
	bool flag = true;
	
	while (flag)
	{
		printf("---------------------\n");
		printf("a)korea thistle\t\t\t"
				"b)beer\n"
				"c)corrot\t\t\t"
				"d)over\n");
		printf("---------------------\n");

		printf("chooice you term:");

		while ((in = getchar()) == '\n') continue;

		switch (in)
		{
			case 'a':
				printf("enter thistle pound:");
				scanf("%f", &p_thistle);
				continue;
			case 'b':
				printf("enter beer pound:");
				scanf("%f", &p_beer);
				continue;
			case 'c':
				printf("enter corrot pound:");
				scanf("%f", &p_carrot);
				continue;
			case 'd':
				return 0;
			defalt:
				break;
		}
		
		t_cost = K_THISTLE * p_thistle;
		b_cost = BEER * p_beer;
		c_cost = CARROT * p_carrot;

		order_cost = t_cost + b_cost + c_cost;

		if (order_cost > SALES) 
			sales_cost = order_cost * R_SALSE;
		else
			sales_cost = 0.0f;
		
		pound = p_thistle + p_beer + p_carrot;

		if (pound > 0)
		{
			if (pound <= F_POUND)
				trans_cost = F_COST;
			else if(pound < TW_POUND)
				trans_cost = TW_COST;
			else
				trans_cost = 8 + pound * 0.1;
		}else
			trans_cost = 0.0f;
		
		total = order_cost - sales_cost + trans_cost;

		printf("goods order detailed:\n");
		printf("---------------------\n");
		printf("korea thistle\t%.2f\t%.2f\t%.2f\n", K_THISTLE, p_thistle, t_cost);
		printf("         beer\t%.2f\t%.2f\t%.2f\n", BEER, p_beer, b_cost);
		printf("       carrot\t%.2f\t%.2f\t%.2f\n", CARROT, p_carrot, c_cost);
		printf("---------------------\n");
		printf("order_cost:%.2f\n", order_cost);
		printf("sales_cost:%.2f\n", sales_cost);
		printf("trans_cost:%.2f\n", trans_cost);
		printf("---------------------\n");
		printf("total:%.2f\n", total);
	}
	
	return 0;
}
