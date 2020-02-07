#include<bits/stdc++.h>
using namespace std;

void subsequence(string check, string str)
{
    int i, j;
    int main_len = str.size();
    int check_len = check.size();

    for (i = 0, j = 0; i < main_len && j < check_len; i++)
    {
        if (str[i] == check[j])
            j++;
    }
    if (j == check_len)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
    freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

    string str, check;
    
    while(cin >> check>> str)
    {
        subsequence(check, str);
    }

    return 0;
}