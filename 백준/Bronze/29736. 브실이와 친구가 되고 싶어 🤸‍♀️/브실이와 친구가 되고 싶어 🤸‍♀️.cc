#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, k, x;
    int cnt = 0;
    cin >> a >> b >> k >> x;
    
    for (int i = k - x; i < k + x + 1; i++)
    {
        if (i < a || i > b) continue;
        cnt++;
    }

    if (cnt == 0) cout << "IMPOSSIBLE";
    else cout << cnt;
}