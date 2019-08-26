#include<stdio.h>

int f(int n)
{
	if(n<=100)
		return f(f(n+11));
	else if(n>=101)
		return n-10;
	
}
int main()
{
	int n;
	while(scanf("%d", &n)==1)
	{
		if(n==0)
			break;
		printf("f91(%d) = %d\n", n, f(n));
	}
	return 0;
}
