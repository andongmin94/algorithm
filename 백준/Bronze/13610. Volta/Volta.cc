#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y; cin >> x >> y;
    int cnt  = 1;
    while (true)
    {
        if (y * cnt - x * cnt >= y) break;
        cnt++;
    }
    cout << cnt;
}
