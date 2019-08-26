#include<stdio.h>
int main()
{
	char s[1001];
	int i, count=0;
	while (gets(s))
	{
		count=0;
		for(i=0; s[i]; i++)
		{
			if(s[i]==' ')
			{
				count++;
			}
		}
				printf("%d\n", ++count);
	}
	return 0;
}
