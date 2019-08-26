#include<stdio.h>
int main()
{
	int T, C, d, i;
	scanf("%d", &T);
	for(i=1; i<=T; i++)
	{
		scanf("%d %d", &C, &d);
		printf("Case %d: %0.2lf\n", i, (double)(d+(9.0/5.0)*C)/(9.0/5.0));
	}
	return 0;
}
