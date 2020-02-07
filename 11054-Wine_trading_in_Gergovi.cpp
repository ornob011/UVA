#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

struct wine
{
	ll cap, pos;

	wine(int a=0, int b=0)
	{
		cap=a;
		pos=b;
	}
};

int main()
{   
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		vector<struct wine>sell(n, 0), buy(n, 0);

		ll ans=0;
		int buylen=0, selllen=0;

		for(ll i=1; i<=n; i++)
		{
			ll a;
			cin>>a;

			struct wine temp(a, i);
			
			if(a>0)
				sell[selllen++]=temp;
			else
				buy[buylen++]=temp;	
		}
		int blen=0, slen=0;

		while(buylen!=blen && selllen!=slen)
		{
			ll maxn=min(sell[slen].cap, -buy[blen].cap);
			sell[slen].cap-=maxn;
			buy[blen].cap+=maxn;

			ans+=(abs(sell[slen].pos-buy[blen].pos))*maxn;

			if(sell[slen].cap==0)
				slen++;

			if(buy[blen].cap==0)
				blen++;
		}

		cout<<ans<<endl;
	}		
	return 0;
}