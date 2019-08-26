#include<stdio.h>
#include<math.h>

int main()
{
    int hour, minute;
    double hour_angle, minute_angle, angle, final_angle;
    while(scanf("%d%*c%d", &hour, &minute)==2)
    {
        if(hour==0 && minute==0)
            break;

        if (hour == 12)
            hour = 0;

        if (minute == 60)
            minute = 0;


        hour_angle = 0.5 * (hour*60.0 + minute);
        minute_angle = 6.0*minute;

        angle = fabs(hour_angle - minute_angle);

        if(angle>180)
            final_angle=360-angle;
        else
            final_angle=angle;

        printf("%0.3lf\n", final_angle);
    }
    return 0;
}
