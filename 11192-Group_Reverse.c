#include<stdio.h>
#include<string.h>
int main()
{
	char str[102];
	int n;
	while(scanf("%d", &n)==1)
	{
		
		if(n==0)
			break;
		scanf("%s", str);
		int len=strlen(str), p, i, j;
		p=len/n;
		for(i=0; i<len; i=i+p)
		{
			for(j=i+p-1; j>=i; j--)
				printf("%c", str[j]);
		}
		printf("\n");
		
	}
	return 0;
}
