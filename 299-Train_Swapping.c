#include<stdio.h>
int main()
{
	int A[64], i, j, count, T, length;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &length);
		count=0;
		for(i=0; i<length; i++)
		{
			scanf("%d", &A[i]);
		}
		for(i=0; i<length-1; i++)
		{
			for(j=i+1; j<length; j++)
			{
				if(A[i]>A[j])
				{
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", count);
	}
	return 0;
}
