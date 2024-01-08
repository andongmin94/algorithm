#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string string;
    cin >> string;
    stack<char> stack;

    int sum = 0;

    for (int i = 0; i < string.size(); i++)
    {
        if (string[i] == '(')
            stack.push('(');
        else if (!(stack.empty()) && string[i] == ')')
        {
            if (string[i - 1] == '(')
            {
                stack.pop();
                sum += stack.size();
            }
            else
            {
                stack.pop();
                sum += 1;
            }
        }
    }
    cout << sum;
}
