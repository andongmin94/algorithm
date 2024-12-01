#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, d, cnt = 0;
        cin >> n >> d;
        while (n--)
        {
            int v;
            double f, c;
            cin >> v >> f >> c;
            if (v * f / c >= d) cnt++;
        }
        cout << cnt << '\n';
    }
}
