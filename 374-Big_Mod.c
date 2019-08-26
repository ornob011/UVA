#include<stdio.h>
int main()
{
    unsigned b,p,m;
    while(scanf("%u %u %u", &b, &p, &m)==3)
    {
        int rem=1;
        while(p)
        {
            if(p & 1)
                rem=(rem*b)%m;
            b=(b*b)%m;
            p=p/2;
        }
        printf("%u\n", rem);
    }
    return 0;
}
