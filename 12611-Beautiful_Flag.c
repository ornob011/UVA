#include<stdio.h>
int main()
{
	int t, r, length, wide, left, right, test=0;
	scanf("%d", &t);
	while(t--)
	{
		test++;
		scanf("%d", &r);
		
		length=(100*r)/20;
		wide=(60*r)/20;
		wide=wide/2;
		left=(length*45)/100;
		right=(length*55)/100;
		
		printf("Case %d:\n", test);
        printf("%d %d\n", -left, wide);
        printf("%d %d\n", right, wide);
        printf("%d %d\n", right, -wide);
        printf("%d %d\n", -left, -wide);
	}
	return 0;
}
