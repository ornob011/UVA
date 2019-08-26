#include<stdio.h>
#include<string.h>
int main()
{
    char S[110];
    int damaged, numindecimal, i, len;
    while(scanf("%d %s", &damaged, S)==2)
    {

        if(damaged==0 && S[0]=='0')
            break;
        int flag=1;
        len=strlen(S);

        for(i=0; i<len; i++)
        {
            numindecimal=S[i]-48;

            if(numindecimal!=damaged)
            {
                if(numindecimal!=0)
                    flag=0;
                if(flag==0)
                    printf("%d", numindecimal);
            }
        }
        if(flag==1)
            printf("0\n");
        else
            printf("\n");
    }
    return 0;
}
