#include<stdio.h>
int main()
{
	int number_of_participants, number_of_budget, number_of_hotels, number_of_weeks;
	int i, price_per, j, available_beds, total, preTotal, max;
	while(scanf("%d %d %d %d", &number_of_participants, &number_of_budget, &number_of_hotels, &number_of_weeks)==4)
	{
		total=max;
		for(i=0; i<number_of_hotels; i++)
		{
			scanf("%d", &price_per);
			for(j=0; j<number_of_weeks; j++)
			{
				scanf("%d", &available_beds);

				if(available_beds>=number_of_participants)
				{
					preTotal=number_of_participants*price_per;

					if(preTotal<=number_of_budget && preTotal<total)
					{
						total=preTotal;
					}
				}
			}
		}
		if(total==max)
		{
			printf("stay home\n");
		}
		else
		{
			printf("%d\n", total);
		}
	}
	 return 0;
}
