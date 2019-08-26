#include<stdio.h>
#include<string.h>
int main()
{
	int T, l;
	char code[1000];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%s", code);
		l=strlen(code);

		if(code[l-1]=='5')
			puts("-");

		else if(code[0]=='9' && code[l-1]=='4')
			puts("*");

		else if(code[0]=='1' && l>=3)
			puts("?");

		else
			puts("+");
	}
	return 0;
}
