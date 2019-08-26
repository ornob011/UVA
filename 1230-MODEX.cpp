#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    //freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    long long tc, res, base, power, mod;
    cin >> tc;
    while (tc--)
    {

        cin >> base >> power >> mod;
        res = 1;
        while (power)
        {
            if (power & 1)
            {
            	res = res * base;
            	res=res%mod;
            }
            base = base * base;
            base=base%mod;
            power = power >> 1;
        }

        cout << res << endl;
    }
    return 0;
}