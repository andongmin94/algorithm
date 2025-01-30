#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r, a;
    cin >> l >> r >> a;

    while (l != r && a > 0)
    {
        if (l > r)
        {
            r++;
            a--;
        }
        else if (l < r)
        {
            l++;
            a--;
        }
    }
    if (a % 2 && a > 0) a--;
    cout << min(l, r) * 2 + a;
}
