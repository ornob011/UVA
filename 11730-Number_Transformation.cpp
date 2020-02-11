#include<bits/stdc++.h>
using namespace std;

const int hi=1002;
const int qrt=32;

bool mark[hi], visited[hi];
int p[hi], plen=0, cost[hi], s, t;


void sieve()
{
	int i, j;

	for(i=3; i<qrt; i++)
	{
		if(!mark[i])
		{
			for(j=i*i; j<hi; j+=(2*i))
				mark[j]=true;
		}
	}

	p[plen++]=2;

	for(i=3; i<hi; i+=2)
	{
		if(!mark[i])
			p[plen++]=i;
	}
}

int bfs(int s)
{
	memset(visited, false, sizeof(visited));
	memset(cost, 0, sizeof(cost));

	int a, x, sum=0;

	visited[s]=true;
	cost[s]=0;

	if(s==t)
		return 0;

	queue<int>q;
	q.push(s);

	while(!q.empty())
	{
		a=q.front();

		q.pop();

		for(int i=0; i<plen && p[i]<a; i++)
		{
			x=p[i];

			if(!(a%x))
			{
				sum=a+x;

				if(sum==t)
					return cost[a]+1;

				if(!visited[sum] && sum<=t)
				{
					visited[sum]=true;
					cost[sum]=cost[a]+1;
					q.push(sum);
				}
			}
		}
	}
	return -1;
}



int main()
{   
 //    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
		
	sieve();

	int tc=0;

	while(cin>>s>>t)
	{
		if(s==0 and t==0)
			break;

		int ans=bfs(s);

		cout<<"Case "<<++tc<<": ";
		cout<<ans<<endl;
	}
	return 0;
}