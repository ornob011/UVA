#include<stdio.h>
int main()
{
	long int num;
	while(scanf("%ld", &num)==1)
	{
		if(num<0)
			break;
		long int a[1000], i, len;
		
		i=0;
		while(num)
		{
			a[i]=num%3;
			num=num/3;
			if(num==0)
				break;
			i++;
		}
		len=i;
		
		for(i=len; i>=0; i--)
			printf("%ld", a[i]);
		printf("\n");
	}
	
	return 0;
}
