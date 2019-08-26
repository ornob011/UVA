#include<stdio.h>
int main()
{
	int a, b, c, sa, sb, sc;
	while(1)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if(a==0 && b==0 && c==0)
			break;
		sa=a*a;
		sb=b*b;
		sc=c*c;
		
		if(sa==sb+sc || sb==sa+sc || sc==sa+sb)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
