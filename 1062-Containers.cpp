#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    int case_number = 0, i, j;

    while (getline(cin, input))
    {
        if (input == "end")
            break;

        vector<stack<char>> stacks;

        for (i = 0; i < input.size(); i++)
        {
            bool found = false;

            for (j = 0; j < stacks.size(); j++)
            {
                if (stacks[j].top() >= input[i])
                {
                    found = true;
                    stacks[j].push(input[i]);
                    break;
                }
            }

            if (!found)
            {
                stack<char> tmp;
                tmp.push(input[i]);
                stacks.push_back(tmp);
            }
        }

        case_number++;
        cout << "Case " << case_number << ": " << stacks.size() << endl;
    }
    return 0;
}