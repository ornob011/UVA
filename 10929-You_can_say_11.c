#include<stdio.h>
#include<string.h>
#define LEN 1110

int main()
{
    long long int i,j,sum, decimal, len;
    char num[LEN];
    while(scanf("%s",&num)==1)
    {
        if(num[0]=='0' && strlen(num)==1)
            break;

        sum=0;
        decimal=0;

        for(i=0; i<strlen(num); i++)
        {
            sum = decimal*10 + num[i]-48;

            decimal = sum%11;
        }
        if(decimal==0)

            printf("%s is a multiple of 11.\n",num);

        else

            printf("%s is not a multiple of 11.\n",num);


    }
    return 0;
}

