#include<stdio.h>
int main()
{
	unsigned int T, i, a, b, c;
	scanf("%u", &T);
	for(i=1; i<=T; ++i)
	{
		scanf("%u %u %u", &a, &b, &c);
		if(a>b && a>c)
		{
			printf("Case %u: %u\n", i, b>c?b:c);
		}
		else if(b > c)
		{
			printf("Case %u: %u\n", i, c>a?c:a);
		}
        else
		{
			printf("Case %u: %u\n", i, a>b?a:b);
		}
    }
    return 0;
}
