#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	int chance, len1, len2, right, n, i, j;
	char ans[100], guess[100];
	bool lose, win, flag;
	
	while(scanf("%d", &n)==1)
	{
		if(n==-1)
			break;
		scanf("%s%s", ans, guess);
		len1=strlen(ans);
		len2=strlen(guess);
		
		lose=false, win=false, chance=7, right=0;
		
		for(i=0; i<len2; i++)
		{
			flag=false;
			for(j=0; j<len1; j++)
			{
				if(guess[i]==ans[j])
				{
					ans[j]=' ';
					right++;
					flag=true;
				}
			}
			if(flag==false)
				chance--;
			if(chance==0)
			{
				lose=true;
				break;
			}
			if(right==len1)
			{
				win=true;
				break;
			}
		}
		printf("Round %d\n", n);
		
		if(win)
			printf("You win.\n");
		else if(lose)
			printf("You lose.\n");
		else
			printf("You chickened out.\n");
	}
	return 0;
}
