#include<bits/stdc++.h>
using namespace std;

int main()
{   
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n, m, i, j;
	while(cin>>n>>m)
	{
		
		if(n==0 && m==0)
			break;

		vector<int>draggon(n);
		vector<int>knight(m);

		for(i=0; i<n; i++)
			cin>>draggon[i];

		for(i=0; i<m; i++)
			cin>>knight[i];

		sort(draggon.begin(), draggon.end());
		sort(knight.begin(), knight.end());

		int ans=0, cur=0;

		for(i=0; i<m; i++)
		{
			if(knight[i]>=draggon[cur])
			{
				ans+=knight[i];
				if(++cur==n)
					break;
			}
		}

		if(cur<n)
			cout<<"Loowater is doomed!"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}