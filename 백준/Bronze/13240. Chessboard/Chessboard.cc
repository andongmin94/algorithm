#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0) cout << '*';
                else cout << '.';
            }
            else
            {
                if (j % 2 != 0) cout << '*';
                else cout << '.';
            }
        }
        cout << '\n';
    }
}
