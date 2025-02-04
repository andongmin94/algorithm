#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    int res = 0;
    while (true)
    {
        res += n;
        n /= m;
        if (!n) break;
    }
    cout << res;
}
