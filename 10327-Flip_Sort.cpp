#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    // freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
    
    int n;

    while(cin>>n)
    {
        int ans=0;
        vector<int>arr(n);

        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(arr[j]>arr[i])
                    ++ans;
            }
        }
        printf("Minimum exchange operations : %d\n",ans);
    }
    return 0;
}