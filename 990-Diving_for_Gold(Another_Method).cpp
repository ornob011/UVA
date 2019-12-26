#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	bool first=true;
	int t, w, n, i, j;

	while(cin>>t>>w)
	{
		if(first)
			first=false;
		else
			cout<<endl;

		cin>>n;

		vector<int>d(35), v(35), W(35);

		vector<vector<int> > dp(35, vector<int>(1001));

		for(i=1; i<=n; i++)
		{
			cin>>d[i]>>v[i];
			W[i]=3*d[i]*w;
		}

		for(j=0; j<=t; j++)
			dp[0][j]=0;

		for(i=1; i<=n; i++)
		{
			for(j=0; j<=t; j++)
			{
				if(W[i]<=j)
					dp[i][j]=max(dp[i-1][j], v[i]+dp[i-1][j-W[i]]);
				else
					dp[i][j]=dp[i-1][j];
			}
		}

		vector<int>ans(35);
		int k=0, sum=0;

		while(n>0)
		{
			if(dp[n][t]!=dp[n-1][t])
			{
				ans[k++]=n;
				t=t-W[n];
				sum=sum+v[n];
			}
			n--;
		}

		cout<<sum<<endl;
		cout<<k<<endl;

		for(i=k-1; i>=0; i--)
			cout<<d[ans[i]]<<" "<<v[ans[i]]<<endl;


	}

	return 0;
}