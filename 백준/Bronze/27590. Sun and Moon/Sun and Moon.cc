#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sun = a;
    int moon = c;
    int ans = 0;
    while(true)
    {
        if (sun % b == 0 && moon % d == 0) break;

        sun += 1;
        moon += 1;
        ans += 1;
    }
    cout << ans;
}