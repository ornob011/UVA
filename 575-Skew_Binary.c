#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[32];
	unsigned int len, i, sum;
	while(gets(s))
	{
		if(s[0]=='0' && s[1]=='\0')
			break;
		sum=0;

		len=strlen(s);

		for(i=0; i<len; i++)
			sum=sum+(s[i]-'0')*(pow(2, len-i)-1);
		printf("%u\n", sum);
	}
	return 0;
}
