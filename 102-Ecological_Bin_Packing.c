#include<stdio.h>
#include<string.h>
int main()
{
    int B[3], G[3], C[3], min, temp;
    char ans[4];
    while(scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
    {
        min=2147483647;
        //BCG
        temp=C[0]+G[0]+B[1]+G[1]+B[2]+C[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "BCG");
        }
        //BGC
        temp=C[0]+G[0]+B[1]+C[1]+B[2]+G[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "BGC");
        }
        //CBG
        temp=B[0]+G[0]+C[1]+G[1]+B[2]+C[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "CBG");
        }
        //CGB
        temp=B[0]+G[0]+C[1]+B[1]+G[2]+C[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "CGB");
        }
        //GBC
        temp=B[0]+C[0]+C[1]+G[1]+B[2]+G[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "GBC");
        }
        //GCB
        temp=B[0]+C[0]+B[1]+G[1]+C[2]+G[2];
        if(temp<min)
        {
            min=temp;
            strcpy(ans, "GCB");
        }
        printf("%s %d\n", ans, min);
    }
    return 0;
}
