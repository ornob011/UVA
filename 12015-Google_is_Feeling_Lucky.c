#include<stdio.h>
int main()
{
	char url[10] [100];
	int relevance[10], T, tc, max, i;
	scanf("%d", &T);
	for(tc=1; tc<=T; tc++)
	{
		max=0;
		scanf("%s %d", &url[0], &relevance[0]);
		max=relevance[0];

		for(i=1; i<10; i++)
		{
			scanf("%s %d", &url[i], &relevance[i]);
			if(relevance[i]>max)
			{
				max=relevance[i];
			}
		}
		printf("Case #%d:\n", tc);

		for(i=0; i<10; i++)
		{
			if(relevance[i]==max)
			{
				printf("%s\n", url[i]);
			}
		}
	}
	return 0;
}
