#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, min_ = 1000; cin >> n;
    while (n--)
    {
        int a, b, c; cin >> a >> b >> c;
        if (a + b + c >= 512 && a + b + c <= min_) min_ = a + b + c;
    }
    if (min_ != 1000) cout << min_;
    else cout << -1;
}
