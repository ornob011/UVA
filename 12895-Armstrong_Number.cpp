#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, length, i;
	long long int to_num, res;
	string num, final;
	cin>>t;
	while(t--)
	{
		cin>>num;

		length=num.length();

		res=0;;

		for(i=0; i<length; i++)
		{
			to_num=num[i]-'0';
			to_num=pow(to_num, length);

			res=res+to_num;
		}
		final=to_string(res);

		if(final==num)
			cout<<"Armstrong"<<endl;
		else
			cout<<"Not Armstrong"<<endl;
	}
	return 0;
}
