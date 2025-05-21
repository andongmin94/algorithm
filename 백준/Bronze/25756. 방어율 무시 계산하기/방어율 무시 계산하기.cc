#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    double m = 0;
    while (n--)
    {
        int a; cin >> a;
        cout << fixed << setprecision(6);
        cout << (1 - (1 - m * 0.01) * (1 - a * 0.01)) * 100 << '\n';
        m = (1 - (1 - m * 0.01) * (1 - a * 0.01)) * 100;
    }
}
