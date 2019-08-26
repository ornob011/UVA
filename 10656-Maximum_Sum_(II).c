#include<stdio.h>
int main()
{
    int N, i, a[1000], maxsub[1000], idx=0;
    while(scanf("%d", &N)==1)
    {
        if(N==0)
            break;
        idx=0;
        for(i=0; i<N; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>0)
                maxsub[idx++]=a[i];
        }
        if(idx!=0)
        {
            for(i=0; i<idx-1; i++)
                printf("%d ", maxsub[i]);
            printf("%d\n", maxsub[i]);

        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

