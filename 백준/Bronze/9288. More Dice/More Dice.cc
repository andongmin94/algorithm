#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int m; cin >> m;
        cout << "Case " << i << ":\n";
        for (int j = 1; j <= m / 2 + 1; j++)
        {
            if (j <= m - j && m - j <= 6) cout << "(" << j << "," << m - j << ")\n";
        }
    }
}
