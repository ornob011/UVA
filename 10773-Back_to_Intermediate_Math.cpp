#include<stdio.h>
#include<math.h>
int main()
{
	int T, tc = 1;
	double u, v, t1, t2, d;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf %lf %lf", &d, &v, &u);
		
		if (v >= u || v == 0 || u == 0)
		{
			printf("Case %d: can't determine\n", tc++);
			continue;
		}
		t1 = (1.0*d) / (u*1.0);
		t2 = (1.0*d) / (sqrt((u*u) - (v * v))*1.0);
		printf("Case %d: %.3lf\n", tc++, fabs(t2 - t1));
	}
	return 0;
}