#include<stdio.h>
#include<string.h>
int main()
{
    char num[1000];
    int len, sum, sumofdigits, i, count;
    while(scanf("%s", num)==1)
    {
        if(num[0]=='0')
            break;
        sum=0;
        len=strlen(num);
        for(i=0; i<len; i++)
            sum=sum+num[i]-48;
        if(sum%9!=0)
            printf("%s is not a multiple of 9.\n", num);
        else
        {
            count=1;
            while(sum>9)
            {
                count++;
                sumofdigits=0;
                while(sum>0)
                {
                    sumofdigits=sumofdigits+sum%10;
                    sum=sum/10;
                }
                sum=sumofdigits;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, count);
        }
    }
    return 0;
}
