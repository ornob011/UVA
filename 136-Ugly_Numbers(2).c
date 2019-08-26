#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,num;
    long long int i;
    for (i=1,n=0;n<1500;i++)
    {
        num=i;
        while (num%2==0) num=num/2;
        while (num%3==0) num=num/3;
        while (num%5==0) num=num/5;
        if (num==1) n++;
    }
    printf("The 1500'th ugly number is %lld.",i-1);
    return 0;
}
