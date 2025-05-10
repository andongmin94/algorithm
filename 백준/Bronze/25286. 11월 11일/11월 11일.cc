#include <bits/stdc++.h>

using namespace std;

int date[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        int a, b; cin >> a >> b;
        if (b == 1) a--, b = 12;
        else b--;

        cout << a << ' ' << b << ' ';
        if (b != 2) cout << date[b] << '\n';
        else
        {
            if (a % 100 == 0)
            {
                if (a % 400 == 0) cout << 29 << '\n';
                else cout << 28 << '\n';
            }
            else
            {
                if (a % 4 == 0) cout << 29 << '\n';
                else cout << 28 << '\n';
            }
        }
    }
}
