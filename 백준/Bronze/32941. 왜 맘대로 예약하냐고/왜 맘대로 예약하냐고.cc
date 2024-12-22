#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, n;
    cin >> t >> x >> n;
    bool a = true;
    while (n--)
    {
        bool b = false;
        int m;
        cin >> m;
        while (m--)
        {
            int i;
            cin >> i;
            if (i == x) b = true;
        }
        if (!b) a = false;
    }
    if (a) cout << "YES";
    else cout << "NO";
}
