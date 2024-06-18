#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    double a = static_cast<double>(n) / (k - m);
    if (a > static_cast<int>(a)) cout << static_cast<int>(a) + 1;
    else cout << a;
}
