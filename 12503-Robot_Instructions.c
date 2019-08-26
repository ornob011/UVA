#include<stdio.h>
int main()
{
	int T, N, move[101], position, check, i;
	char command[100];
	scanf("%d", &T);
	while(T--)
	{
		position=0;
		scanf("%d ", &N);
		for(i=0; i<N; i++)
		{
			gets(command);
			if(command[0]=='L')
				{
					move[i]=-1;
					position--;
				}
			else if(command[0]=='R')
				{
					move[i]=1;
					position++;
				}
			else
				{
					sscanf(command+8, "%d", &check);
					move[i]=move[check-1];
					position=position+move[i];
				}
		}
		printf("%d\n", position);
	}
	return 0;
}
