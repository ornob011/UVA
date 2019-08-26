#include<stdio.h>
int main()
{
	int bankmoney[22], number_of_banks, number_of_debentures, value, debtor, creditor;
	int debenture_value, flag, i;
	while(scanf("%d %d", &number_of_banks, &number_of_debentures)==2)
	{
		if(number_of_banks==0 && number_of_debentures==0)
		{
			break;
		}
		flag=1;
		for(i=0; i<number_of_banks; i++)
		{
			scanf("%d", &bankmoney[i]);
		}
		for(i=1; i<=number_of_debentures; i++)
		{
			scanf("%d %d %d", &debtor, &creditor, &debenture_value);
			bankmoney[creditor-1]=bankmoney[creditor-1]+debenture_value;
			bankmoney[debtor-1]=bankmoney[debtor-1]-debenture_value;
		}
		for(i=0; i<number_of_banks; i++)
		{
			if(bankmoney[i]<0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			printf("S\n");
		}
		else
		{
			printf("N\n");
		}
	}
	return 0;
}
