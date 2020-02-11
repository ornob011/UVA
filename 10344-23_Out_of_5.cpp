#include<bits/stdc++.h>
using namespace std;

const int maxn=7;
const int n=5;
int a[maxn];

bool flag[maxn], solved;

void back_tracking(int res, int k)
{
	if(solved)
		return;

	if(res==23 and k>n)
	{
		solved=true;
		return;
	}

	for(int i=1; i<=n; i++)
	{
		if(flag[i])
		{
			flag[i]=false;

			back_tracking(res+a[i], k+1);
			back_tracking(res-a[i], k+1);
			back_tracking(res*a[i], k+1);

			flag[i]=true;
		}
	}
}

int main()
{   
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	while(1)
	{
		for(int i=1; i<=n; i++)
			cin>>a[i];

		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0)
			break;

		solved=false;

		memset(flag, true, sizeof(flag));

		for(int i=1; i<=n; i++)
		{
			flag[i]=false;

			back_tracking(a[i], 2);

			flag[i]=true;

			if(solved)
				break;
		}
		if(solved)
			cout<<"Possible"<<endl;

		else
			cout<<"Impossible"<<endl;


	}

	




	return 0;
}