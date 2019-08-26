#include<stdio.h>
int main()
{
    int original_number, number, i;
    while(scanf("%d", &original_number)==1)
    {
        if(original_number==0)
            break;
        if(original_number<0)
        {
            printf("%d = -1 x ", original_number);
            original_number=original_number*-1;
        }
        else if(original_number>0)
            printf("%d = ", original_number);
        for(i=2; i*i<=original_number; i++)
        {
            if(original_number%i==0)
            {
                printf("%d x ", i);
                original_number=original_number/i;
                number=i;
                i=1;
            }
        }
        printf("%d\n", original_number);
    }
    return 0;

}
