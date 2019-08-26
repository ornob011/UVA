#include<stdio.h>
int main()
{
	long int n;
	while(scanf("%ld", &n)!=EOF)
	{
		long int i, sum=0;
		for(i=1; i<=n; i++)
		{
			sum=sum+i*i*i;
		}
		printf("%ld\n", sum);
	}
	return 0;
}
