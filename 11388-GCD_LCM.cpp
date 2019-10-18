#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
	if(b==0)
		return a;
	else return GCD(b, a%b);
}

int LCM(int a, int b)
{
	return (a/GCD(a, b))*b;
} 
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, a, b, gcd, lcm;
	cin>>t;

	while(t--)
	{
		cin>>a>>b;

		gcd=GCD(a, b);
		lcm=LCM(a, b);

		if(a!=gcd && b!=lcm)
			cout<<-1<<endl;

		else
			cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}