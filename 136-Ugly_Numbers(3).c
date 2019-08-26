#include<stdio.h>
int main()
{
    int N[1500]={1};
    int p2=0, p3=0, p5=0, i, tmp;

    for(i=1; i<1500; i++)
    {
        while(N[p2]*2<=N[i-1])
            p2++;
        while(N[p3]*3<=N[i-1])
            p3++;
        while(N[p5]*5<=N[i-1])
            p5++;

        tmp=N[p2]*2;

        if(N[p3]*3<tmp)
            tmp=N[p3]*3;
        if(N[p5]*5<tmp)
            tmp=N[p5]*5;
        N[i]=tmp;
    }
    printf("The 1500'th ugly number is %d.\n", N[1499]);
    return 0;
}
