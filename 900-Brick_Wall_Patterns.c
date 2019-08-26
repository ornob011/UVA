#include<stdio.h>

int fun(int n)
{
	if (n==1 || n==2)
		return n;
	else 
		return fun(n-1)+fun(n-2);
}
int main()
{
	int n;
	while(scanf("%d", &n)==1)
	{
		if(n==0)
			break;
		
		printf("%d\n", fun(n));
	}
	return 0;
}
