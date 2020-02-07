#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t=1;

	while(true)
	{
		int c, n;
		cin>>c;

		if(cin.eof())
			break;

		cin>>n;

		vector<int>masses(2*c);

		for(int i=0; i<n; i++)
			cin>>masses[i];

		double mean=0;

		for(auto it=masses.begin(); it!=masses.end(); it++)
			mean+=*it;

		mean=mean/c;

		for(int i=n; i<2*c; i++)
			masses[i]=0;

		sort(masses.begin(), masses.end(), greater<int>());

		double imbalance=0;

		cout<<"Set #"<<t<<endl;

		for(int i=0; i<c; i++)
		{
			cout<<" "<<i<<":";

			if(masses[2*c-i-1])
				cout<<" "<<masses[2*c-i-1];

			if(masses[i])
				cout<<" "<<masses[i];

			imbalance+=fabs(masses[i]+masses[2*c-i-1]-mean);
			cout<<endl;

		}
		cout<<setprecision(5)<<fixed;
		cout<<"IMBALANCE = "<<imbalance<<endl;
		cout<<endl;

		t++;
	}
	return 0;
}