#include<stdio.h>
#include<string.h>
int main()
{
    char name[6];
    int count=1;
    while(1)
    {
        gets(name);
        if(name[0]=='*')
        {
            break;
        }
        else if(name[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n", count++);
        }
        else if(name[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n", count++);
        }
    }
    return 0;
}
