#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t; cin >> n;

    while (n--)
    {
        cin >> m;
        if (n) t = m;
    }
    cout << m + m - t;
}
