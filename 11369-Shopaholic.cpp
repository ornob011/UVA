#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t;
	cin>>t;
	while(t--)
	{
		int n, i, discount=0;
		cin>>n;
		vector<int>v(n);

		for(i=0; i<n; i++)
			cin>>v[i];

		sort(v.begin(), v.end(), greater<int>());

		for(i=2; i<n; i=i+3)
			discount+=v[i];

		cout<<discount<<endl;
	}
	return 0;
}