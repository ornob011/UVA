#include<stdio.h>
int main()
{
	int T, tc, milecost, juicecost, N, duration;
	scanf("%d", &T);
	for(tc=1; tc<=T; tc++)
	{
		scanf("%d", &N);
		milecost=0;
		juicecost=0;
		while(N--)
		{
			scanf("%d", &duration);
			milecost=milecost+(duration/30)*10+10;
			juicecost=juicecost+(duration/60)*15+15;
		}
		printf("Case %d: ", tc);
		if(milecost<juicecost)
		{
			printf("Mile %d\n", milecost);
		}
		else if(juicecost<milecost)
		{
			printf("Juice %d\n", juicecost);
		}
		else
		{
			printf("Mile Juice %d\n", juicecost);
		}
	}
	return 0;
}
