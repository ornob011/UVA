#include<stdio.h>
#include<string.h>

int res(char str[], int len)
{
	int add=0, i, temp;

	for(i=0; i<len; i++)
	{
		if(str[i]>='a' && str[i]<='z')
			add=add+str[i]-96;

		else if(str[i]>='A' && str[i]<='Z')
			add=add+str[i]-64;
	}
	if (add % 9 == 0)
        return 9;
    else
        return add % 9;
}

int main()
{
	char a[30], b[30];
	int len1, len2;
	while(gets(a))
	{
		gets(b);
		len1=strlen(a);
		len2=strlen(b);

		int a_sum=res(a, len1);
		int b_sum=res(b, len2);

		int temp;
		if(a_sum>b_sum)
		{
			temp=a_sum;
			a_sum=b_sum;
			b_sum=temp;
		}
		printf("%0.2lf %%\n", (a_sum*100.0)/b_sum);
	}
	return 0;
}
