#include<bits/stdc++.h>
using namespace std;

#define pb push_back
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
		
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;

		vector<vector<int> > adj(n);

		vector<int>color(n, -1);

		bool isBipartite=true;

		int l;
		cin>>l;

		while(l--)
		{
			int u, v;
			cin>>u>>v;

			adj[u].pb(v);
			adj[v].pb(u);
		}

		queue<int>q;

		color[0]=1;

		q.push(0);

		while(!q.empty() && isBipartite)
		{
			int u=q.front();

			q.pop();

			for(int i=0; i<adj[u].size(); i++)
			{
				int v=adj[u][i];
				if(color[v]==color[u])
				{
					isBipartite=false;
					break;
				}
				else if(color[v]==-1)
				{
					color[v]=1-color[u];
					q.push(v);
				}
			}
		}

		if(isBipartite)
			cout<<"BICOLORABLE."<<endl;
		else
			cout<<"NOT BICOLORABLE."<<endl;
	}
	return 0;
}