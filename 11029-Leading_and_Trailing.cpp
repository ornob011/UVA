#include <bits/stdc++.h>
using namespace std;

#define llu unsigned long long
llu final(llu base, llu power, llu M)
{
    llu res1, res2;
    if(power==0)
        return 1;
    
    else if(power&1)
    {
        res1=base%M;
        res2=final(base, power-1, M)%M;
        return (res1*res2)%M;
    }
    else
    {
        res1=final(base, power/2, M)%M;
        return (res1*res1)%M;
    }   
}

int main()
{
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    unsigned tc;
    llu trailing, leading;

    double base, power, x;
    cin>>tc;
    while(tc--)
    {
        cin>>base>>power;

        x = power*log10(base) - floor(power*log10(base));
        leading=pow (10,x) * 100;
        trailing=final(base, power, 1000);

        printf ("%llu...%03llu\n",leading,trailing);
    }
}