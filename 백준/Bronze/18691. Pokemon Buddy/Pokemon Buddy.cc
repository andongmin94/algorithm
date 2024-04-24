#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int g, c, e, v;
        cin >> g >> c >> e;

        if (g == 1) v = e - c;
        if (g == 2) v = (e - c) * 3;
        if (g == 3) v = (e - c) * 5;

        if (v <= 0) cout << "0\n";
        else cout << v << '\n';
    }
}
