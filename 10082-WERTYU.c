#include<stdio.h>
#include<string.h>
int main()
{
    char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char line[1000];
    while(gets(line))
    {
        int len=strlen(line);
        int i, j;
        for(i=0; i<len; i++)
        {
            if(line[i]==' ')
                printf(" ");
            else
            {
                j=0;
                while(line[i]!=key[j+1])
                    j++;
                printf("%c", key[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
