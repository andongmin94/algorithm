#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int c, p;
        cin >> c >> p;
        cout << c << ' ' << p << '\n' << c * p - (c - 1) * 2 << '\n';
    }
}
