#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int f, r, i, j;
	while(cin>>f)
	{
		if(f==0)
			break;
		cin>>r;

		vector<double>front_cluster(f);
		vector<double>rear_cluster(r);

		for(i=0; i<f; i++)
			cin>>front_cluster[i];

		for(i=0; i<r; i++)
			cin>>rear_cluster[i];

		vector<double>ratio;

		for(i=0; i<r; i++)
		{
			for(j=0; j<f; j++)
				ratio.push_back((double)rear_cluster[i]/(double)front_cluster[j]);
		}

		sort(ratio.begin(), ratio.end());

		vector<double>ans;

		for(i=0; i<ratio.size()-1; i++)
			ans.push_back(ratio[i+1]/ratio[i]);

		double last=*max_element(ans.begin(), ans.end());

		cout<<setprecision(2)<<fixed<<last<<endl;

	}
	return 0;
}