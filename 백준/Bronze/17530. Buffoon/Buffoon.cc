#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n;
    n--;
    cin >> m;
    while (n--)
    {
        int k; cin >> k;
        if (k > m) break;
    }
    if (n != -1) cout << 'N';
    else cout << 'S';
}
