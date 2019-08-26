#include<stdio.h>
#include<math.h>
int main()
{
    int n, store[3001], i, j, substract[3001], flag;
    while(scanf("%d", &n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", &store[i]);
            substract[i]=0;
        }
        for(i=0; i<n-1; i++)
            substract[abs(store[i+1]-store[i])]=1;
            flag=1;
        for(i=0; i<n; i++)
        {
            if(substract[i]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }
}
