#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 0, c = 0, n; cin >> n;
    while (n--)
    {
        int a_, b_, c_;
        cin >> a_ >> b_ >> c_;
        a += a_;
        b += b_;
        c += c_;

        if (a >= 30 && b >= 30 && c >= 30)
        {
            int t = min(a, min(b, c));
            a -= t;
            b -= t;
            c -= t;
            cout << t << '\n';
        }
        else cout << "NO\n";
    }
}
