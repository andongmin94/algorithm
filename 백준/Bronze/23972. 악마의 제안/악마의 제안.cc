#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n; cin >> k >> n;

    long long x = 1;
    if (n == 1)
    {
        cout << -1;
        return 0;
    }
    while (true)
    {
        if ((x - k) * n >= x) break;
        x++;
    }
    cout << x;
}
