#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (!a && !b && !c && !d) break;

        int cnt = 0;
        while (true)
        {
            if (a == b && b == c && c == d && d == a) break;
            cnt++;
            int a_ = abs(a-b);
            int b_ = abs(b-c);
            int c_ = abs(c-d);
            int d_ = abs(d-a);
            a = a_;
            b = b_;
            c = c_;
            d = d_;
        }
        cout << cnt << '\n';
    }
}
