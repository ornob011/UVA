#include<stdio.h>
int main()
{
    int T, t, i, count=0;
    char word[100];
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%s", &word);
        count++;
        printf("%d\n", count);
    }
    return 0;
}
