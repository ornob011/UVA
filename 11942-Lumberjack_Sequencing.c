#include<stdio.h>
int main()
{
	int T, count, number[15], i, up, down;
	printf("Lumberjacks:\n");
	scanf("%d", &T);
	while(T--)
	{
		for(i=0; i<10; i++)
		{
			scanf("%d", &number[i]);
		}
		up=number[0];
		down=number[1];
		if(up>down)
		{
			count=0;
			for(i=0; i<9; i++)
			{
				if(number[i]>number[i+1])
				{
					count++;
				}
			}
		}
		else if(up<down)
		{
			count=0;
			for(i=0; i<9; i++)
			{
				if(number[i]<number[i+1])
				{
					count++;
				}
			}
		}
		if(count==9)
		{
			printf("Ordered\n");
		}
		else
		{
            printf("Unordered\n");
		}
	}
	return 0;
}
