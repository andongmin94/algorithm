#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    bool t = true;

    while (n--)
    {
        vector<char> v;
        char c;
        int temp = m;
        while (temp--)
        {
            cin >> c;
            v.push_back(c);
        }
        int cnt = 0;
        for (auto e : v)
            if (e == 'A') cnt++;
        if (cnt != 1) t = false;
    }
    if (t) cout << "Yes";
    else cout << "No";
}
