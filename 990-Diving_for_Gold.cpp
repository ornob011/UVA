#include<bits/stdc++.h>
using namespace std;

struct Coin
{
	int d, v;

};

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	bool first=true;
	int t, w;

	while(cin>>t>>w)
	{
		if(first)
			first=false;
		else
			cout<<endl;

		int n, i, j;
		cin>>n;

		vector<struct Coin>coin(n);

		for(i=0; i<n; i++)
			cin>>coin[i].d>>coin[i].v;

		vector<int>dp(1001, 0);

		vector<vector<bool> >get(n, vector<bool>(1001));

		for(i=0; i<n; i++)
		{
			int need=coin[i].d*3*w;

			for(j=t; j>=need; j--)
			{
				if(dp[j]<dp[j-need]+coin[i].v)
				{
					dp[j]=dp[j-need]+coin[i].v;
					get[i][j]=true;
				}

			}
		}
		stack<int>s;

		for(i=n-1, j=t; i>=0; i--)
		{
			if(get[i][j])
			{
				s.push(i);
				j=j-coin[i].d*3*w;
			}
		}

		cout<<dp[t]<<endl;
		cout<<s.size()<<endl;
		while(!s.empty())
		{
			i=s.top();
			s.pop();

			cout<<coin[i].d<<" "<<coin[i].v<<endl;
		}
	}
	return 0;
}