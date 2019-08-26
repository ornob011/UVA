#include<stdio.h>
int main()
{
	int T, f, a, b, c, i;
	long long sum;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &f);
		sum=0;
		for(i=0; i<f; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			sum=sum+(long long)a*c;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
