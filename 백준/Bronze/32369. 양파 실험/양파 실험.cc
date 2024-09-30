#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, q = 1, w = 1;
    cin >> a >> b >> c;

    while(a--)
    {
        q += b;
        w += c;

        if (q < w) swap(q, w);
        if (q == w) w--;
    }
    cout << q << ' ' << w;
}
