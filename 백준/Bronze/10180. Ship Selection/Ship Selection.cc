#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n, d; cin >> n >> d;
        int cnt = 0;
        while (n--)
        {
            double v, f, c;
            cin >> v >> f >> c;
            if (v * (f / c) > d || v * (f / c) == d) cnt++;
        }
        cout << cnt << '\n';
    }
}
