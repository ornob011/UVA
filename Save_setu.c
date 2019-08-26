#include<stdio.h>
int main()
{
    int T, donate, total=0;
    char s[100];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &s);
        if(s[0]=='d')
        {
            scanf("%d", &donate);
            total+=donate;
        }
        else
        {
            printf("%d\n", total);
        }
    }
    return 0;
}
