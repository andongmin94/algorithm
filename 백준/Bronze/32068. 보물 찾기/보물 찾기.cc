#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int l, r, s; cin >> l >> r >> s;

        int a = 2 * (s - l);
        int b = 2 * (r - s) - 1;
        int cnt = min(a, b); 
        cout << ++cnt << '\n';
    }
}
