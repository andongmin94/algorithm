#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sec = -1;
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    while (0 < g)
    {
        sec++;
        if (sec % a == 0) g -= b;
        if (sec % c == 0) g -= d;
        if (sec % e == 0) g -= f;
    }
    cout << sec;
}
