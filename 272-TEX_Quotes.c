#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10000];
	int i, l, count=0;

	while(gets(ch))
	{
		l=strlen(ch);
		for(i=0; i<l; i++)
		{
			if(ch[i]=='"')
			{
				count=count+1;
				if(count%2==1)
					{
						printf("``");
					}
				else
				{
					printf("''");
				}
			}
			else
			{
				printf("%c", ch[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
