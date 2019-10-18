#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int i, ans, j;
	string s;
	while(getline(cin, s))
	{
		j=s.length();

		for(i=j-1; i>=0;)
		{
			if(s[0]>='0' && s[0]<='9')
			{
				if(s[i]!='1')
				{
					ans=(s[i-1]-'0')+(s[i]-'0')*10;
					i=i-2;
				}
				else
				{
					ans=(s[i-2]-'0')+(s[i-1]-'0')*10+(s[i]-'0')*100;
					i=i-3;
				}
				printf("%c", ans);
			}
			else
			{
				ans=s[i];
				while(ans)
				{
					cout<<ans%10;
					ans=ans/10;
				}
				--i;
			}
		}
		cout<<endl;
	}
	return 0;
}
