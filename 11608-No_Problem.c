#include<stdio.h>
int main()
{
    int S, problems[13], req_problems[13], i, tc=0;
    while(scanf("%d", &S)==1)
    {
        if(S<0)
            break;
        for(i=1; i<=12; i++)
            scanf("%d", &problems[i]);
        for(i=1; i<=12; i++)
            scanf("%d", &req_problems[i]);
        printf("Case %d:\n", ++tc);
        for(i=1; i<=12; i++)
        {
            if(req_problems[i]>S)
                printf("No problem. :(\n");
            else
            {
                printf("No problem! :D\n");
                S=S-req_problems[i];
            }
            S=S+problems[i];
        }
    }
    return 0;
}
