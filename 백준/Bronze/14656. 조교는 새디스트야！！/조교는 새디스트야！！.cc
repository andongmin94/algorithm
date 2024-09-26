#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        if (i != m) cnt++;
    }

    cout << cnt;
}
