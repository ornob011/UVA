#include<stdio.h>
int main()
{
    char ch, last;
    while(scanf("%c", &ch)==1)
    {
        if(isalpha(ch))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch=getchar();
                }
                printf("ay");
            }
            else
            {
                last=ch;
                ch=getchar();
                while(isalpha(ch))
                {
                    putchar(ch);
                    ch=getchar();
                }
                printf("%cay", last);
            }
        }
        putchar(ch);
    }
    return 0;
}

