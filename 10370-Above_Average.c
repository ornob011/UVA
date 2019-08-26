#include<stdio.h>
int marks[100];
int main()
{
	int T, number_of_people, total, i, above_average;
	double average;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d", &number_of_people);
		total=0;
		for(i=0; i<number_of_people; i++)
		{
			scanf("%d", &marks[i]);
			total=total+marks[i];
		}
		average=(double)total/(double)number_of_people;
		above_average=0;
		for(i=0; i<number_of_people; i++)
		{
			if(marks[i]>average)
			{
				above_average++;
			}
		}
		printf("%0.3lf%%\n", (double)above_average/(double)number_of_people*100.0);
	}
	return 0;
}
