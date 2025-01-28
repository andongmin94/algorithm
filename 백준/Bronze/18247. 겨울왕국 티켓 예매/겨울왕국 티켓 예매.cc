#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n <= 11 || m < 4)
        {
            cout << -1 << '\n';
            continue;
        }
        cout << m * 11 + 4 << '\n';
    }
}
