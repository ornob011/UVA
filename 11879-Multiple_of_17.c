#include<stdio.h>
int main()
{
    int i, sum, rem, len;
    char s[1000000];
    while(scanf("%s", &s))
    {
        rem=0;
        len=strlen(s);
        if(len==1 && s[0]=='0')
            break;
        for(i=0; i<len; i++)
        {
            sum=rem*10+(s[i]-'0');
            rem=sum%17;
        }
        if(rem==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
