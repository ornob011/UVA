#include<stdio.h>
int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int i, j, temp, max_cycle_length, cycle_length, temp_i, temp_j;
    unsigned int n;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        temp_i = i;
        temp_j = j;
        if (i > j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        max_cycle_length = 0;
        for (; i <= j; i++)
        {
            n = i;
            cycle_length = 1;

            while (n != 1)
            {
                if (n % 2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
                cycle_length++;
            }
            if (cycle_length > max_cycle_length)
                max_cycle_length = cycle_length;
        }

        printf("%d %d %d\n", temp_i, temp_j, max_cycle_length);
    }
    return 0;
}
