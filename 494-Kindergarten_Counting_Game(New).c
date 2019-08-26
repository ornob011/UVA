#include<stdio.h>
int main()
{
	char s[10001];
	int i, count, flag;
	while(gets(s))
	{
		count=0, flag=0;
		for(i=0; s[i]!='\0'; i++)
		{
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
			{
				flag=1;
			}
			else
			{
				if(flag)
				{
					count++;
					flag=0;
				}
			}
		}
		if(s[i]=='\0' && flag==1)
		{
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
