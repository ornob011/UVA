#include<bits/stdc++.h>
using namespace std;

vector<long long>a;
long long ans=0;

void inversion(int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    vector<int>tempL(n1+1), tempR(n2+1);

    for(int i=0; i<n1; i++)
        tempL[i]=a[l+i];

    for(int i=0; i<n2; i++)
        tempR[i]=a[mid+i+1];

    int i=0, j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(tempL[i]>tempR[j])
        {
            a[k++]=tempR[j++];
            ans+=(n1-i);
        }
        else
            a[k++]=tempL[i++];
    }

    while(i<n1)
        a[k++]=tempL[i++];
    while(j<n2)
        a[k++]=tempR[j++];
}

void mergesort(int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(l, mid);
        mergesort(mid+1, r);
        inversion(l, mid, r);
    }
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
    
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int x;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }

        mergesort(0, n-1);

        cout<<ans<<endl;

        ans=0;

        a.clear();
    }
    return 0;
}