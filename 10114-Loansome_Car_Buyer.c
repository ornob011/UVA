#include<stdio.h>
int main()
{
    int number_of_months, depreciation_record;

    double down_payment, amount_loan;
    while(scanf("%d %lf %lf %d", &number_of_months, &down_payment, &amount_loan, &depreciation_record)==4)
    {
        double num_depreciation[1000]= {};
        if(number_of_months<0)
            break;
        while(depreciation_record--)
        {
            int starting_month;
            scanf("%d", &starting_month);
            scanf("%lf", &num_depreciation[starting_month]);

        }

        double car_value = down_payment + amount_loan;
        double owes=amount_loan;
        double money_paid = amount_loan/number_of_months;


        int i;
        for (i = 0; i <= number_of_months; i++)
        {
            if (num_depreciation[i]==0)

                num_depreciation[i] = num_depreciation[i - 1];

            car_value = car_value * (1 - num_depreciation[i]);
            if (owes<=car_value)
            {
                if(i==1)
                    printf("%d month\n", i);
                else
                    printf("%d months\n", i);
                break;
            }
            owes=owes-money_paid;
        }
    }
    return 0;
}
