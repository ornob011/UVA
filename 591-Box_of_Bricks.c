#include<stdio.h>
int main()
{
	int n, tc=0;
	while(scanf("%d", &n)==1)
	{
		++tc;
		if(n==0)
			break;
		int arr[60];
		int avg, sum=0, i, ans=0;
		
		for(i=0; i<n; i++)
		{
			scanf("%d", &arr[i]);
			sum=sum+arr[i];
		}
		avg=sum/n;
		for(i=0; i<n; i++)
		{
			if(arr[i]>avg)
				ans=ans+arr[i]-avg;
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", tc, ans);
	}
	return 0;
}
