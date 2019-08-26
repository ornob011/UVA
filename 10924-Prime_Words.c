#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100];
	int sum, i, len, flag;
	while(scanf("%s", s)!=EOF)
	{
		sum=0, flag=1;
		len=strlen(s);
		for(i=0; i<len; i++)
		{
			if(s[i]>='a' && s[i]<='z')
				sum=sum+s[i]-'a'+1;
			else
				sum=sum+s[i]-'A'+27;
		}
		for(i=2; i<=sqrt(sum); i++)
		{
			if(sum%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("It is a prime word.\n");
		else
			printf("It is not a prime word.\n");
	}
	return 0;
}
