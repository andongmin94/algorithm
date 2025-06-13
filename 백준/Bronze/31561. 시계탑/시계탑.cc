#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n; cin >> n;
    cout << fixed << setprecision(1);
    if (n < 30 || n == 30) cout << n / 2;
    else cout << (n - 30) * 3 / 2 + 15;
}
