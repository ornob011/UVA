#include<stdio.h>
int main()
{
    int i, t, T, N, sum;
    for(i=1; i<=75 ; i++)
    {
        scanf("%d", &T);
        if(T==0)
        {
            break;
        }
        sum=0;
        for(t=1; t<=T; t++)
        {
            scanf("%d", &N);
            if(N==0)
            {
                 sum=sum-1;
            }
            else if(N!=0)
            {
                sum=sum+1;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
