#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector <ll> vc;

void solve(ll num)
{
    while (num % 2 == 0)
    {
        vc.push_back(2);
        num /= 2;
    }

    for(ll i = 3; i*i<= num; i+=2)
    {
        while (num % i == 0)
        {
            vc.push_back(i);
            num /= i;
        }
    }

    if(num > 2) 
        vc.push_back(num);

}

int main()
{

    // freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    // freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    ll num, t=1, i;

    while (cin >> num)
    {
        if(num == 0) 
            break;

        if(num < 0) 
        {
            cout << num << " = -1 x ";
            num = abs(num);
        }
        else
            cout << num << " = ";

        vc.clear();
        solve(num);

        for(i = 0; i < vc.size() - 1; i++)
            cout << vc[i] << " x ";
        
        cout << vc[vc.size() - 1] << endl;
    }

    return 0;
}