#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t=1, n, m, r, c, mines, i, j;

	while(cin>>n>>m, n>0 && m>0)
	{
		if(t>1)
			cout<<endl;

		vector<vector<char> >field(n+2, vector<char>(m+2, '.'));

		for(r=1; r<=n; r++)
		{
			for(c=1; c<=m; c++)
				cin>>field[r][c];
		}

		cout << "Field #" << t++ << ":" << endl;

		for(r=1; r<=n; r++)
		{
			for(c=1; c<=m; c++)
			{
				if(field[r][c]=='*')
					cout<<"*";

				else
				{
					mines=0;
					for(i=r-1; i<=r+1; i++)
					{
						for(j=c-1; j<=c+1; j++)
						{
							if(field[i][j]=='*')
								mines++;
						}
					}
					cout<<mines;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}