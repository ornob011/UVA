#include<stdio.h>

int multiply(int x, int fact[], int size)
{
	int carry=0, i, p;
	
	for(i=0; i<size; i++)
	{
		p=fact[i]*x+carry;
		fact[i]=p%10;
		carry=p/10;
	}
	while(carry!=0)
	{
		fact[size]=carry%10;
		carry=carry/10;
		size++;
	}

	return size;
}

int main()
{
	int num, fact[10000], i, size;
	while(scanf("%d", &num)==1)
	{
		size=1;
		fact[0]=1;
		for(i=2; i<=num; i++)
			size=multiply(i, fact, size);
		
		printf("%d!\n", num);
		
		for(i=size-1; i>=0; i--)
			printf("%d", fact[i]);
		
		printf("\n");
	}
	return 0;
}
