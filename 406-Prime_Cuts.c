#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(int number)
{
    int i;
    for(i=2; i<=sqrt(number); i++)
    {
        if(number%i==0)

            return false;
    }
    return true;
}
int main()
{
    int i, j, index=1, number[1001], count;
    number[0]=1;
    int N, C;
    for(i=2; i<10000; i++)
    {
        if(isprime(i))
        {
            number[index]=i;
            index++;
        }
    }
    while(scanf("%d %d", &N, &C)==2)
    {
        count=0;
        printf("%d %d:", N, C);

        for(i=0; number[i]<=N; i++)
                count++;

        if(count&1)
            C=C*2-1;
        else
            C=C*2;
        if(C>count)
            C=count;
        for(i=count/2-C/2, j=0; j<C; j++, i++)
            printf(" %d", number[i]);

        printf("\n\n");
    }
    return 0;
}
