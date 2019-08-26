#include<stdio.h>
int main()
{
	int Case, position[20], i, j, maximum, minimum, stores;
	scanf("%d", &Case);
	while(scanf("%d", &Case)==1)
	{
		 for(i=1; i<=Case; i++)
        {
     scanf("%d",&stores);
	for(j=0; j<stores; i++)
	{
		scanf("%d", &position[j]);
	}

		maximum=position[0];
		for(j=0; j<stores; j++)
		{
			if(maximum<position[j])
			{
				maximum=position[j];
			}
		}
		minimum=position[0];
		for(j=0; j<stores; j++)
		{
			if(minimum>position[j])
			{
				minimum=position[j];
			}
		}
		printf("%d", (maximum-minimum)*2);
        }
	}
	return 0;
}
