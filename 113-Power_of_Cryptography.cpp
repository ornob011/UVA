#include<stdio.h>
#include<math.h>
int main()
{
	double base, number;
	while (scanf_s("%lf %lf", &base, &number) != EOF)
	{
		printf("%0.0lf\n", pow(number, 1.0 / base));
	}
	return 0;
}