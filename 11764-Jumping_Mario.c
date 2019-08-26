#include<stdio.h>
int main()
{
	int T, i, N, j, height[100], high_jump, low_jump;
	scanf("%d", &T);
	for(i=1; i<=T; i++)
	{
		high_jump=0;
		low_jump=0;
		scanf("%d", &N);
		for(j=0; j<N; j++)
		{
			scanf("%d", &height[j]);
		}
		for(j=0; ; j++)
		{
			if(j==N-1)
				break;
			if(height[j]==height[j+1])
				continue;
			if(height[j]>height[j+1])
				{
					low_jump++;
				}
			else
				{
					high_jump++;
				}
		}
		printf("Case %d: %d %d\n", i, high_jump, low_jump);
	}
	return 0;
}
