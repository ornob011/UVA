#include<stdio.h>
int main()
{
    int N, i, a[1000], sum;
    while(scanf("%d", &N)==1)
    {
        if(N==0)
            break;
        sum=0;
        for(i=0; i<N; i++)
        {
            scanf("%d", &a[i]);
            sum=sum+a[i];
        }
        if(sum!=0)
        {
            for(i=0; i<N; i++)
                printf("%d ", a[i]);
            printf("\n");

        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
