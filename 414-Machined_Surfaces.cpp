#include<bits/stdc++.h>
using namespace std;

using namespace std;

string str [15] ;
int countX[15] ;
int n ;

int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int i, j, k, ans, len, maxn;

    while(cin>>n)
    {
        if(n==0)
            break;

        maxn=0;

        getchar();

        for(i=0; i<n; i++)
        {
            countX[i]=0;

            getline(cin, str[i]);

            len=str[i].length();

            for(j=0; j<len; j++)
                if(str[i][j]=='X')
                    countX[i]++;

            if(countX[i]>maxn)
                maxn=countX[i];

        }
        ans=0;

        for (i = 0; i < n; ++i)
            ans=ans+maxn-countX[i];

        cout<<ans<<endl;
    }
    return 0;
}