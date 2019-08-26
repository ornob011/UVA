#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b, int &x, int &y)
{

	if(a==0)
	{
		x=0;
		y=1;

		return b;
	}

	int x1, y1;
	int d=gcd(b%a, a, x1, y1);
	
	x=y1-(b/a)*x1;
	y=x1;

	return d;
}

int main()
{

	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int a, b, x, y;

	while(cin>>a>>b)
	{
		int d=gcd(a, b, x, y);

		if(a==b)
		{
			x=0;
			y=1;
		}
		cout<<x<<" "<<y<<" "<<d<<endl;
	}

	return 0;
}
