#include<stdio.h>
#define PI acos(-1)
int main()
{
    double a, angle, d;
    char s[4];
    while(scanf("%lf %lf %s", &a, &angle, s)==3)
    {
        if(s[0]=='m')
            angle=angle/60;
        if(angle>180)
            angle=360-angle;
        angle=PI*angle/180;
        d=6440+a;
        printf("%0.6lf %0.6lf\n", angle*d, 2*d*sin(angle/2));
    }
    return 0;
}
