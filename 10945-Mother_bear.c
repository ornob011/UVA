#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000], i, j, len;
    while(gets(s))
    {
        if(s[0]=='D' && s[1]=='O' && s[2]=='N' && s[3]=='E')
            break;
        len=strlen(s);
        int count=0;
        for(i=0, j=0; i<len; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z')
                s[j++]=s[i];
        }
        int len1=0;
        for(i=0, len1=j-1; i<len1; i++, len1--)
        {
            if (s[i] != s[len1])
            {
                count=1;
                break;
            }
            else
                count=0;
        }
        if(count==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
