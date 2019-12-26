#include<bits/stdc++.h>
using namespace std;

struct sequence
{
	string ch;
	int measure;
};

int countMeasure(string s)
{
	int i, j;
	int cnt=0;
	
	for(i=0; s[i]; i++)
	{
		for(j=i+1; s[j]; j++)
		{
			if(s[i]>s[j])
				cnt++;
		}
	}
	return cnt;
}

bool cmp(sequence x, sequence y)
{
	return x.measure<y.measure;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t;
	cin>>t;
	bool blank=false;
	while(t--)
	{
		int n, m, i;
		cin>>n>>m;

		struct sequence a[m];

		for(i=0; i<m; i++)
		{
			cin>>a[i].ch;
			a[i].measure=countMeasure(a[i].ch);
		}

		stable_sort(a, a+m, cmp);

		if(blank)
			cout<<endl;

		blank=true;

		for(i=0; i<m; i++)
			cout<<a[i].ch<<endl;
	}
	return 0;
}