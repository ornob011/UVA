#include<stdio.h>
#include<string.h>
int main()
{
    int T, t;
    char c[6];
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%s", &c);
        if(strlen(c)==5)
        {
            printf("3\n");
        }
        else if((c[0]=='t' && c[1]=='w')||c[0]=='t' && c[2]=='o'||c[1]=='w' && c[2]=='o')
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
