#include<stdio.h>
long long reverse(long long number)
{
	long long r=0;
	while(number!=0)
	{
		r=r*10+number%10;
		number=number/10;
	}
	return r;
}

int main()
{
	long long original_number, temp, reversed_number, sum;
	unsigned T, count;
	scanf("%u", &T);
	while(T--)
	{
		scanf("%lld", &original_number);
		count=0;
		temp=original_number;
		reversed_number=reverse(original_number);
		if(reversed_number==temp)
		{
			printf("0 %lld\n", reversed_number);
		}
		else
		{
			do
			{
				sum=temp+reversed_number;
				temp=sum;
				reversed_number=reverse(sum);
				count++;
			} while(temp!=reversed_number);

			printf("%u %lld\n", count, reversed_number);
		}
	}
	return 0;
}
