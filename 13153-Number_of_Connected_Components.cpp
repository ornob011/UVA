#include<bits/stdc++.h>
using namespace std;

#define mx 1000009
int sp[mx+3];
int prime[mx+3];

void sieve()
{
	for(int i=2; i<=mx; i+=2)
		sp[i]=2;

	for(int i=3; i<=mx; i+=2)
		sp[i]=i;

	int x=sqrt(mx);

	for(int i=3; i<=x; i+=2)
	{
		if(sp[i]==i)
		{
			for(int j=i*i; j<=mx; j+=i)
				sp[j]=i;
		}
	}
}

vector<int>v[mx];

bool track[mx], track2[mx];

void dfs(int sn)
{
	track2[sn]=true;

	for(int i=0; i<v[sn].size(); i++)
	{
		int x=v[sn][i];

		if(track2[x]==false)
			dfs(x);
	}

}

int main()
{   
 //    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	sieve();

	int t;
	cin>>t;
	int c=0;

	while(t--)
	{
		int n;
		memset(track, false, sizeof(track));
		memset(track2, false, sizeof(track2));
		memset(v, 0, sizeof(v));

		cin>>n;

		int count=0;

		for(int i=0; i<n; i++)
		{
			int x;
			cin>>x;

			if(x==1)
			{
				count++;
				continue;
			}
			int xx=x;

			if(sp[xx]==x)
			{
				track[xx]=true;
				continue;
			}
			while(1)
			{
				if(xx<=1)
					break;

				int pf=sp[xx];
				track[pf]=true;

				while(xx%pf==0)
					xx=xx/pf;

				v[pf].push_back(x);
				v[x].push_back(pf);
			}
		}
		cout<<"Case "<<++c<<": ";
		int ans=0;

		for(int i=2; i<=mx; i++)
		{
			if(track[i]==true && track2[i]==false)
			{
				dfs(i);
				ans++;
			}
		}
		cout<<ans+count<<endl;
	}
	return 0;
}