#include<stdio.h>
#include<stdbool.h>
bool uglynumber(n);
int main()
{
    int count, i;
    for(i=2, count=1; count<1500; i++)
    {
        if(uglynumber(i))
            count++;
    }
    printf("The 1500'th ugly number is %d.\n", i-1);
}
bool uglynumber(n)
{
    while(n%2==0)
        n=n/2;
    while(n%3==0)
        n=n/3;
    while(n%5==0)
        n=n/5;

    return (n==1);
}
