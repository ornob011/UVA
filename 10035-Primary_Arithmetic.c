#include<stdio.h>
int main()
{
	unsigned int a, b, carry, rem;
	while(scanf("%ld %ld", &a, &b)==2)
	{
		if(a==0 && b==0)
		{
			break;
		}
		carry=0;
		rem=0;
		while(a>0 || b>0)
		{
			rem=((a%10)+(b%10)+rem)/10;
			a=a/10;
			b=b/10;
			carry=carry+rem;
		}
		if(carry==0)
		{
			printf("No carry operation.\n");
		}
		else if(carry==1)
		{
			printf("1 carry operation.\n");
		}
		else
		{
			printf("%ld carry operations.\n", carry);
		}
	}
	return 0;
}
