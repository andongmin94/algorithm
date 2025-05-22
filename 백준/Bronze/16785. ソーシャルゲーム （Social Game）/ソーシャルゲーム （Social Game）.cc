#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d = 0, day = 0;
    cin >> a >> b >> c;

    while (d < c)
    {
        day++;
        d += a;
        if (day % 7 == 0) d += b;
    }
    cout << day;
}
