#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a%b);
}


int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int T, n, arr[100], ans, i, j;
	string str;

	cin>>T;

	getline(cin, str);

	while(T--)
	{
		getline(cin, str);

		istringstream is(str);

		n=0;

		while(is>>arr[n])
			n++;

		ans=0;

		for(i=0; i<n-1; i++)
		{
			for(j=i+1; j<n; j++)
				ans=max(ans, gcd(arr[i], arr[j]));
		}
		cout<<ans<<endl;
	}
	return 0;	
}
 
