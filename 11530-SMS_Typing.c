#include<stdio.h>
#include<string.h>
int main()
{
	int t, s[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4}, test;

	char str[1000];

	scanf("%d", &t);
	test=0;
	getchar();
	while(t--)
	{
		gets(str);
		int ans=0, i;
		for(i=0; str[i]; i++)
		{
			if(str[i]==' ')
				ans++;
			else
				ans=ans+s[str[i]-'a'];
		}
		 printf("Case #%d: %d\n", ++test, ans);
	}
	return 0;
}
