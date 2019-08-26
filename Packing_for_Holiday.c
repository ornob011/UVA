#include<stdio.h>
int main()
{
    int T, t, L, W, H;
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%d %d %d", &L, &W, &H);
        if(L<=20 && W<=20 && H<=20)
        {
            printf("Case %d: good\n", t);
        }
        else
        {
            printf("Case %d: bad\n", t);
        }
    }
    return 0;
}
