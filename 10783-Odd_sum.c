#include<stdio.h>
int main()
{
	int T, a, b, sum, i=0, j=1;
	scanf("%d", &T);
	while(j<=T)
	{
		scanf("%d %d", &a, &b);
		sum=0;
		for(i=a; i<=b; i++)
		{
			if(i%2!=0)
			{
				sum=sum+i;
			}
		}
		printf("Case %d: %d\n", j, sum);
		}
		return 0;
}

