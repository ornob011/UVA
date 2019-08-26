#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int test, i, j, sum, carry, len1, len2, x, y;
    char first[1000], second[1000], add[1000];

    scanf("%d", &test);
    while (test--)
    {
        scanf("%s %s", first, second);

        len1 = strlen(first);
        len2 = strlen(second);

        if (len1 > len2)
        {
            for (i = len2; i < len1; i++)
                second[i] = '0';
            second[i] = '\0';
        }
        else
        {
            for (i = len1; i < len2; i++)
                first[i] = '0';
            first[i] = '\0';
        }
        len1 = strlen(first);

        sum = 0;
        carry = 0;

        for (i = 0; i < len1; i++)
        {
            x = first[i] - '0';
            y = second[i] - '0';

            sum = x + y + carry;

            if (sum <= 9)
            {
                add[i] = sum + '0';
                carry = 0;
            }
            else
            {
                sum = sum % 10;
                add[i] = sum + '0';
                carry = 1;
            }
        }
        if (carry == 1)
        {
            add[i] = carry + '0';
            i++;
        }
        add[i] = '\0';
        len1 = i;

        for (j = 0; j < len1; j++)
        {
            if (add[j] != '0')
                break;
        }

        for (i = j; i < len1; i++)
            printf("%c", add[i]);

        printf("\n");

        memset(first, '\0', sizeof(first));
        memset(second, '\0', sizeof(second));
        memset(add, '\0', sizeof(add));
    }
    return 0;
}