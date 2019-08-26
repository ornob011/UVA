#include<stdio.h>
int main()
{
	long int cigarette, k, butts, extra, have, i;
	while (scanf("%ld %ld", &cigarette, &k) == 2)
	{
		have = cigarette;
		extra = 0;

		for (i = 0; ; i++)
		{
			butts = cigarette + extra;
			extra = butts % k;
			cigarette = butts / k;
			have = have + cigarette;
			butts = cigarette + extra;

			if (butts < k)
				break;
		}
		printf("%ld\n", have);
	}
	return 0;
}