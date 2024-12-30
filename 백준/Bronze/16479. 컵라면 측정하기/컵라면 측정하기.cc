#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double k, d1, d2, n;
    cin >> k >> d1 >> d2;
    n = max(d1, d2) - min(d1, d2);
    n /= 2;
    cout << k * k - n * n;
}
