#include<stdio.h>
int main()
{
	int number_of_participants, number_of_budget, number_of_hotels, number_of_weeks;
	int i, price_per, j, available_beds, preTotal, cost=15000000;
	while(scanf("%d %d %d %d", &number_of_participants, &number_of_budget, &number_of_hotels, &number_of_weeks)==4)
	{
		for(i=0; i<number_of_hotels; i++)
		{
			scanf("%d", &price_per);
			for(j=0; j<number_of_weeks; j++)
			{
				scanf("%d", &available_beds);
				preTotal=0;

				if(available_beds>=number_of_participants)
				{
					preTotal=number_of_participants*price_per;

					if(cost>preTotal)
					{
						cost=preTotal;
					}
				}
			}
		}
		if(cost>number_of_budget)
		{
			printf("stay home\n");
		}
		else
		{
			printf("%d\n", cost);
		}
		cost=15000000;
	}
	 return 0;
}
