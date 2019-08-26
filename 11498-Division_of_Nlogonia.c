#include<stdio.h>
int main()
{
	int t, a, b, x, y;
	while(scanf("%d", &t)==1)
	{
		if(t==0)
		{
			break;
		}
		scanf("%d %d", &x, &y);
		while(t--)
		{
			scanf("%d %d", &a, &b);
			if(a==x|| b==y)
			{
				printf("divisa\n");
			}
            else if(a>x && b>y)
                {
                	printf("NE\n");
                }
            else if(a<x && b>y)
                {
                	printf("NO\n");
                }
            else if(a<x && b<y)
                {
                	printf("SO\n");
                }
            else
                {
                	printf("SE\n");
                }
		}
	}
	return 0;
}
