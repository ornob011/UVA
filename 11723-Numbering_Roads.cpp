#include<stdio.h>
int main()
{
	int R, N, test = 0, ans;
	while (scanf("%d %d", &R, &N) == 2)
	{
		if (R == 0 && N == 0)
			break;
		ans = (R - N) / N + ((R - N) % N != 0 && R >= N);
		printf("Case %d: ", ++test);
		if (ans > 26)
			puts("impossible");
		else
			printf("%d\n", ans);
	}
	return 0;
}