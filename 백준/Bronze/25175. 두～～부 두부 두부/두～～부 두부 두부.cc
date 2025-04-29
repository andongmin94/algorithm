#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    int res = ((m - 1) + (k - 3) % n + n) % n + 1;
    cout << res;
}
