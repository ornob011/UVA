#include<stdio.h>
#include<math.h>
int main()
{
	int N, i, j, tc;
	for(tc=1 ; ; tc++)
	{
		scanf("%d", &N);

		if(N<0)
		{
			break;
		}
		for(i=1 ; ; i++)
		{
			j=pow(2, i);

			if(N==1)
			{
				printf("Case %d: 0\n", tc);
				break;
			}
			else if(j>=N)
			{
				printf("Case %d: %d\n", tc, i);
				break;
			}
		}
	}
	return 0;
}
