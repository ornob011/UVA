#include<stdio.h>
#include<string.h>
int main()
{
    char str[999];
    while(gets(str))
    {
        int i, ascii[128] = {}, f;
        for(i=0; str[i]; i++)
        {
            if(str[i]>='a' && str[i]<='z')
                ascii[str[i]]++;
            if(str[i]>='A' && str[i]<='Z')
                ascii[str[i]]++;
        }
        f=0;
        for(i=0; i<128; i++)
            f=f > ascii[i] ? f : ascii[i];
        for(i=0; i<128; i++)
            if(f==ascii[i])
                putchar(i);
        printf(" %d\n", f);
    }
    return 0;
}
