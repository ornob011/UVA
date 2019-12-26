#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n) 
{ 
	int i, w; 
	int K[n+1][W+1]; 

	for (i = 0; i <= n; i++) 
	{ 
		for (w = 0; w <= W; w++) 
		{ 
			if (i==0 || w==0) 
				K[i][w] = 0; 
			else if (wt[i-1] <= w) 
				K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
			else
				K[i][w] = K[i-1][w]; 
		} 
	} 

	return K[n][W]; 
} 
int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t;
	cin>>t;

	while(t--)
	{
		int n, i, ans=0;
		cin>>n;

		int profit[n], weight[n];

		for(i=0; i<n; i++)
			cin>>profit[i]>>weight[i];

		int member;
		cin>>member;

		int capacity;

		for(i=0; i<member; i++)
		{
			cin>>capacity;
			ans+=knapsack(capacity, weight, profit, n);
		}
		cout<<ans<<endl;
	}
	return 0;
}