#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double length, wide, radius, red, green;
		
		scanf("%lf", &length);
		
		owide=(6*length)/10;
		
		radius=(2*length)/10;
		
		red=pi*radius*radius;
		
		green=length*wide - red;
		
		printf("%.2lf %.2lf\n", red, green);
	}
	return 0;
}
