#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0, b = 0;
    cin >> n;
    while (n--)
    {
        int q, w; cin >> q >> w;
        if (q > w)
        {
            a += q;
            a += w;
        }
        else if (q < w)
        {
            b += q;
            b += w;
        }
        else
        {
            a += q;
            b += w;
        }
    }
    cout << a << ' ' << b;
}
