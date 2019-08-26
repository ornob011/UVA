#include<stdio.h>
int main()
{
	int T, sum, difference, a, b;
	scanf("%d", &T);
	while(T--)
		{
			scanf("%d %d", &sum, &difference);
			a=(sum+difference);
			b=(sum-difference);

			if(a<0 || b<0 || a%2!=0 || b%2!=0)
			{
				printf("impossible\n");
			}
			else
			{
				printf("%d %d\n", a/2, b/2);
			}
		}
	return 0;
}
