#include<stdio.h>
#include<math.h>
int main()
{
	long long int n, a, i;
	while(scanf("%lld", &n)==1)
	{
		if(n==0)
			break;
		
		a=sqrt(n);
		i=a*a;
		if(i==n)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
