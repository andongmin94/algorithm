#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, q, a, b;
    cin >> p >> q >> a >> b;

    int k = q - p >= 0 ? p : q;
    cout << k * a + (q - p >= 0 ? q - p : 0) * b;
}
