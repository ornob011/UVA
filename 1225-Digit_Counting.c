#include<stdio.h>
int main()
{
	int T, input_number, output_number[11], mod, m, j, l, k;
	scanf("%d", &T);
	while(T--)
	{
		for(l=0; l<10; l++)
		{
			output_number[l]=0;
		}
		scanf("%d", &input_number);
		for(j=1; j<=input_number; j++)
		{
			m=j;
			while(m!=0)
			{
				mod=m%10;
				m=m/10;
				output_number[mod]++;
			}
		}
		for(k=0; k<10; k++)
		{
			if(k<9)
			{
				printf("%d ", output_number[k]);
			}
			else
			{
				printf("%d\n", output_number[k]);
			}
		}
	}
	return 0;
}
