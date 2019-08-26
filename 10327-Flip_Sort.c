#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		int arr[n], i, j, count=0;
		for(i=0; i<n; i++)
			scanf("%d", &arr[i]);
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(arr[i]>arr[j])
					count++;
			}
		}
		printf("Minimum exchange operations : %d\n", count);
	}
	return 0;
}
