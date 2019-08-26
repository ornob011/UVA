#include<stdio.h>
int main()
{
    int height, climb, slid, fatigue;
    while(scanf("%d %d %d %d", &height, &climb, &slid, &fatigue)==4)
    {
        if(height==0)
            break;
        double c_height=0;
        double c_climb=(double)climb;
        double c_fatigue=(fatigue*c_climb)/100.0;

        int days=0;

        while(1)
        {
            days++;
            c_height=c_height+c_climb;

            if(c_height>height)
            {
                printf("success on day %d\n", days);
                break;
            }
            c_height=c_height-(double)slid;

            if (c_height < 0)
            {
                printf("failure on day %d\n", days);
                break;
            }

            c_climb=c_climb-c_fatigue;
            if(c_climb<0)
                c_climb=0;
        }
    }
    return 0;
}
