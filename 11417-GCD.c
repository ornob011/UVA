#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}

int main()
{
	int N, i, j, sum;
	while(scanf("%d", &N)==1)
	{
		if(N==0)
		{
			break;
		}
		sum=0;
		for(i=1; i<N; i++)
		{
			for(j=i+1; j<=N; j++)
			{
				sum=sum+gcd(i, j);
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
