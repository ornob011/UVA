#include<bits/stdc++.h>
using namespace std;

int n=10001;
int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    int i, j;

    vector<int> x(n, 0), y(n, 0);
    vector<bool> hasAns(n, 0);

    for(i=2; i<=60; i++)
    {
        for(j=i-1; j>=1; j--)
        {
            if(i*i*i-j*j*j<=n-1 && hasAns[i*i*i-j*j*j]==0)
            {
                hasAns[i*i*i-j*j*j]=1;
                x[i*i*i-j*j*j]=i;
                y[i*i*i-j*j*j]=j;
            }
        }
    }

    int n;
    while(cin>>n)
    {
        if(n==0)
            break;

        if(hasAns[n])
            cout<<x[n]<<" "<<y[n]<<endl;

        else
            cout<<"No solution"<<endl;
    }
    return 0;
}
