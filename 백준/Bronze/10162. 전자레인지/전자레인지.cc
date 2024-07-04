#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;

    while(n)
    {
        if (n >= 300)
        {
            a = n / 300;
            n %= 300;
        }
        else if (n >= 60)
        {
            b = n / 60;
            n %= 60;
        }
        else if (n >= 10)
        {
            c = n / 10;
            n %= 10;
        }

        if (n > 0 && n < 10) break;
    }

    if (n) cout << -1;
    else cout << a << ' ' << b << ' ' << c;
}
