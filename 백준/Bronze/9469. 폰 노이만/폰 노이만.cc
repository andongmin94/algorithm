#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        double n, d, a, b, f; cin >> n >> d >> a >> b >> f;
        cout << n << ' ';
        cout << fixed << setprecision(6);
        cout << (d / (a + b)) * f << '\n';
    }
}
