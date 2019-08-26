#include<stdio.h>
int main()
{
    int i, j, index=1, number[1001], list[1001], lt;
    number[0]=1;
    int N, C;
    for(i=2; i<1001; i++)
    {
        int flag=0;
        int check_prime;

        for(check_prime=2; check_prime<=sqrt(i); check_prime++)
        {
            if(i%check_prime==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            number[index++]=i;
    }

    while(scanf("%d %d", &N, &C)==2)
    {
        printf("%d %d:", N, C);

        lt=0;

        for(i=0; i<index; i++)
        {
            if(number[i]<=N)
                list[lt++]=number[i];

            else

                break;
        }
        if(lt&1)
            C=C*2-1;
        else
            C=C*2;
        if(C>lt)
            C=lt;
        for(i=lt/2-C/2, j=0; j<C; j++, i++)
            printf(" %d", list[i]);
        printf("\n\n");
    }
    return 0;
}

