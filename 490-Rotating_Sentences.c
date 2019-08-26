#include<stdio.h>
#include<string.h>

int max(int mx, int len)
{
	if(mx>len)
		return mx;
	else
		return len;
}
int main()
{
		int c=0, mx=0, i, j;
		char s[105][105];
		memset(s, ' ', sizeof(s));

		while(gets(s[c]))
		{
			int len=strlen(s[c]);
			s[c][len]=32;
			mx=max(mx, len);
			c++;
		}
		for(i=0; i<mx; i++)
		{
			for(j=c-1; j>=0; j--)
				printf("%c", s[j][i]);
			puts("");
		}
		return 0;
}
