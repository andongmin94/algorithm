#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int l_p = 0, r_p = 0;
    int l, r;
    int cnt = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> l >> r;

        if (i > 0)
        {
            if (l != 0 && l == l_p) cnt++;
            if (r != 0 && r == r_p) cnt++;
        }
        if (r != 0 && l == r) cnt++;

        l_p = l;
        r_p = r;
    }

    cout << cnt << '\n';
}
