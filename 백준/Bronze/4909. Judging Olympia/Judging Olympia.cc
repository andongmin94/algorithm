#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;

        double MAX = max(a, max(b, max(c, max(d, max(e, f)))));
        double MIN = min(a, min(b, min(c, min(d, min(e, f)))));
        cout << (a + b + c + d + e + f - MAX - MIN) / 4 << '\n';
    }
}
