#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--)
    {
        stack<char> s;
        string string;
        cin >> string;

        for (auto e : string)
        {
            if (!s.empty())
            {
                if (s.top() == '(' && e == ')')
                {
                    s.pop();
                    continue;
                }
            }
            s.push(e);
        }

        if (s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}