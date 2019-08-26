#include<stdio.h>
#include<math.h>
int main()
{
    const double kpi=acos(-1.0);
    double l, w, h, theta, x;
    while(scanf("%lf %lf %lf %lf", &l, &w, &h, &theta)!=EOF)
    {
        x=tan(theta*kpi/180.0)*l;
        if(x>h)
        {
            x=tan((90.0 - theta) * kpi / 180.0) * h;
            printf("%.3lf mL\n", x*h*w/2.0);
        }
        else
            printf("%.3lf mL\n", ((h-x)+h)*l*w/2);
    }
    return 0;
}
