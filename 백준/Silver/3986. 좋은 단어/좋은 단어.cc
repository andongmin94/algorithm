#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    
    while(n--)
    {
        stack<char> stack;
        string s;
        cin >> s;

        for (auto e : s)
        {
            if (!stack.empty() && e == stack.top()) stack.pop();
            else stack.push(e);
        }

        if (stack.empty()) cnt++;
    }
    cout << cnt;
}
