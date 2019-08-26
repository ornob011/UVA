#include <stdio.h>

int main()
{
    int a[5], b[5], i, sum, flag;
    while (1)
    {
        for (i = 0; i < 5; i++)
        {
            if (scanf("%d", &a[i]) != 1)
                return 0;
        }
        for (i = 0; i < 5; i++)
        {
            if (scanf("%d", &b[i]) != 1)
                return 0;
        }
        for (i = 0; i < 5; i++)
        {
            sum = a[i] + b[i];
            if(sum==1)
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Y\n");
        else
            printf("N\n");

    }
    return 0;
}
