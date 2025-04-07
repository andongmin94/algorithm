#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d1, d2, d3; cin >> d1 >> d2 >> d3;

    cout << fixed << setprecision(1);
    double a = (d1 + d2 - d3) / 2, b = (d1 + d3 - d2) / 2, c = (d2 + d3 - d1) / 2;
    if (a > 0 && b > 0 && c > 0) cout << 1 << '\n' << a << ' ' << b << ' ' << c;
    else cout << -1;
}
