#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, s, n;
    cin >> h >> m >> s >> n;
    s += m * 60;
    s += h * 3600;
    m = 0;
    h = 0;

    while (n--)
    {
        int a, b; cin >> a;
        
        if (a != 3) cin >> b;
        if (a == 1) s = (s + b) % 86400;
        if (a == 2) s = (s - b) % 86400;
        if (s < 0) s = 86400 + s;
        if (a == 3)
        {
            h = s / 3600;
            m = s % 3600 / 60;
            cout << h << ' ' << m << ' ';
            cout << s % 3600 % 60;
            cout << '\n';
        }
    }
}

