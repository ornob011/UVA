#include<stdio.h>

const char *a[] = { "", "1", "22", "333", "4444", "55555", "666666", "7777777", "88888888", "999999999" };

int main()
{
	register unsigned testcase, i, j, k, times, amp;
	scanf_s("%u", &testcase);
	while (testcase--)
	{
		scanf_s("%u%u", &amp, &times);

		while (times--)
		{
			for (i = 1; i < amp; i++)
				printf("%s\n", a[i]);
			for (k = i; k; k--)
				printf("%s\n", a[k]);

			if (times || testcase)
				printf("\n");
		}
	}
	return 0;
}