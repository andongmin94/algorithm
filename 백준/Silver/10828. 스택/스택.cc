#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> stack;
    while(n--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int t;
            cin >> t;
            stack.push(t);
        }

        if (s == "pop" && !stack.empty())
        {
            cout << stack.top() << '\n';
            stack.pop();
        }
        else if (s == "pop") cout << -1 << '\n';

        if (s == "size") cout << stack.size() << '\n';

        if (s == "empty") cout << (stack.empty() ? 1 : 0) << '\n';
        
        if (!stack.empty() && s == "top") cout << stack.top() << '\n';
        else if (s == "top") cout << -1 << '\n';
    }
}
