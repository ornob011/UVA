#include<stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)==3)
    {
        if(a==b && b==c)
            printf("*\n");
        else if(a==b && a!=c)
            printf("C\n");
        else if(b==c && a!=b )
            printf("A\n");
        else if(a==c && a!=b)
            printf("B\n");
    }
    return 0;
}
