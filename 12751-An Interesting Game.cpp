#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, n, k, x, count, i, j, sum1, sum2, z;

	cin>>t;
	z=1;
	while(t--)
	{
		sum1=0, sum2=0;
		cin>>n>>k>>x;

		for(i=1; i<=n; i++)
			sum1=sum1+i;

		count=0;

		for(i=x; ;i++, count++)
		{
			if(count==k)
				break;

			sum2=sum2+i;
		}

		cout<<"Case "<<z<<": "<<sum1-sum2<<endl;
		z++;

	}
	return 0;
}
