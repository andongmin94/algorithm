#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, d, k;
    cin >> a >> d >> k;
    k -= a;
    if (k % d == 0 && k / d + 1 > 0) cout << k / d + 1;
    else cout << 'X';
}
