#include<stdio.h>
int main()
{
	char code;
	while(scanf("%c", &code)!=EOF)
	{
		if(code!='\n')
		{
			printf("%c", code-7);
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
