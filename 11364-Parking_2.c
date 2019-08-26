#include <stdio.h>
int main()
{
	int Case, Store, i, min, max, temp;
	scanf("%d", &Case);
	while (Case--)
	{
		min = 99; max = 0;
	    scanf("%d", &Store);
	    for (i = 0; i<Store; ++i)
			{
				scanf("%d", &temp);
				if (temp < min)
					min = temp;
				if (temp > max)
					max = temp;
			}
		printf("%d\n", (max-min)*2);
	}
		return 0;
}
