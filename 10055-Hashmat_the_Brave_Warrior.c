#include<stdio.h>
int main()
{
	unsigned long int h, o;
	while(scanf("%lu %lu", &h, &o)!=EOF)
	{
		if(h>o)
			printf("%lu\n", h-o);
		else
			printf("%lu\n", o-h);
	}
	return 0;
}
