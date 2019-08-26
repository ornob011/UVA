#include<stdio.h>

int happy(int num)
{
	int sum=0;
	if(num<=9)
		return num;
	while(num!=0)
	{
		int rev=num%10;
		sum=sum+rev*rev;
		num=num/10;
	}
	happy(sum);
}

int main()
{
	int t, tc=0;
	scanf("%d", &t);
	while(t--)
	{
		tc++;
		int num;
		scanf("%d", &num);
		
		printf("Case #%d: ", tc);
		
		if(num==7)
			printf("%d is a Happy number.\n", num);
		
		else if(happy(num)==1)
			printf("%d is a Happy number.\n", num);
		
		else
			printf("%d is an Unhappy number.\n", num);
	}
	return 0;
}
