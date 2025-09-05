#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":\n";

        int n; cin >> n;

        while (n--)
        {
            int m; cin >> m;
            if (m == 6) continue;
            cout << m + 1 << '\n';
        }
    }
}
