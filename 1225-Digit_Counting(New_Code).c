#include<stdio.h>
int main()
{
    int T, input_number, z, i, m;
    int count[10];
    scanf("%d", &T);
    while(T--)
    {
        for(z=0; z<10; z++)
        {
            count[z]=0;
        }
        scanf("%d", &input_number);

        for(i=1; i<=input_number; i++)
        {
            m=i;
            while(m!=0)
            {
                if(m%10==0)
                    count[0]++;
                if(m%10==1)
                    count[1]++;
                if(m%10==2)
                    count[2]++;
                if(m%10==3)
                    count[3]++;
                if(m%10==4)
                    count[4]++;
                if(m%10==5)
                    count[5]++;
                if(m%10==6)
                    count[6]++;
                if(m%10==7)
                    count[7]++;
                if(m%10==8)
                    count[8]++;
                if(m%10==9)
                    count[9]++;
                m=m/10;
            }
        }
        for(z=0; z<10; z++)
        {
            if(z==9)
            {
                printf("%d", count[z]);
            }
            else
            {
                printf("%d ", count[z]);
            }
        }
        printf("\n");
    }
    return 0;
}
