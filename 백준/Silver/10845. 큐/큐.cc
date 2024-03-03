#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;

    while(n--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }

        if (s == "pop" && !q.empty())
        {
            cout << q.front() << '\n';
            q.pop();
        }
        else if (s == "pop") cout << -1 << '\n';

        if (s == "size") cout << q.size() << '\n';

        if (s == "empty") cout << (q.empty() ? 1 : 0) << '\n';

        if (s == "front" && !q.empty()) cout << q.front() << '\n';
        else if (s == "front") cout << -1 << '\n';

        if (s == "back" && !q.empty()) cout << q.back() << '\n';
        else if (s == "back") cout << -1 << '\n';
    }
}
