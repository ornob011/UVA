#include<stdio.h>
int f(int number)
{
	if(number<10)
		return number;
	int sum=0;
	while(number)
	{
		sum=sum+number%10;
		number=number/10;
	}
	return f(sum);
}

int main()
{
	int number;
	while(scanf("%d", &number)==1)
	{
		if(number==0)
		{
			break;
		}
		printf("%d\n", f(number));
	}
	return 0;
}
