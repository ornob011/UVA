#include<stdio.h>
int main()
{
    int T=1;
    char word[13];
    scanf("%s", word);
    while(word[0]!='#')
    {
        printf("Case %d: ", T);

        if(word[0]=='H' && word[1]=='E')
        {
            printf("ENGLISH\n");
        }
        else if(word[0]=='H' &&word[1]=='O')
        {
            printf("SPANISH\n");
        }
        else if(word[0]=='H' && word[1]=='A')
        {
            printf("GERMAN\n");
        }
        else if(word[0]=='B' && word[1]=='O')
        {
            printf("FRENCH\n");
        }
        else if(word[0]=='C' && word[1]=='I')
        {
            printf("ITALIAN\n");
        }
        else if(word[0]=='Z' && word[1]=='D')
        {
            printf("RUSSIAN\n");
        }
        else
        {
            printf("UNKNOWN\n");
        }
        scanf("%s", word);
        ++T;
    }
    return 0;
}
