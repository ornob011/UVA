#include<stdio.h>
int main()
{
    int cday, cmon, cyear, bday, bmon, byear, d, m, y, test, t;
    test=0;
    scanf("%d", &t);
    while(t--)
    {
		++test;
        scanf("%d/%d/%d", &cday, &cmon, &cyear);
        scanf("%d/%d/%d", &bday, &bmon, &byear);

        d=0, m=0, y=0;
        if(cday>=bday)
            d=cday-bday;
        else
        {
            d=(cday+30)-bday;
            --cmon;
        }
        if(cmon>=bmon)
            m=cmon-bmon;
        else
        {
            m=(cmon+12)-bmon;
            --cyear;
        }

        y=cyear-byear;

        if(y<0)
            printf("Case #%d: Invalid birth date\n", test);

        else if(y>130)
            printf("Case #%d: Check birth date\n", test);

        else
            printf("Case #%d: %d\n", test, y);
    }
    return 0;
}
