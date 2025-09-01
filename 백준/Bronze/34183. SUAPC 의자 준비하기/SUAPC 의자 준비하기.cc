#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b; cin >> n >> m >> a >> b;

    cout << ((n * 3) - m > 0 ? (n * 3 - m) * a + b : 0);
}
