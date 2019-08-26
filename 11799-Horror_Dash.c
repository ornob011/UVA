#include<stdio.h>
int main()
{
    int T, counting_digit, digit, i, k=1, max;
    scanf("%d", &T);
    while (k<=T)
    {
    	max=0;
		scanf("%d", &counting_digit);
		for (i=0; i<counting_digit; i++)
            {
                scanf("%d", &digit);
                if (digit>max)
                    max=digit;
            }
            printf("Case %d: %d\n", k, max);
            k++;
    }
	return 0;
}
