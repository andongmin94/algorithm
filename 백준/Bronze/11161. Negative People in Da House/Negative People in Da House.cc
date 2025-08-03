#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int m, sum = 0, cnt = 0; cin >> m;
        while (m--)
        {
            int a, b; cin >> a >> b;
            sum += a;
            sum -= b;
            if (sum < 0)
            {
                cnt += (sum * -1);
                sum = 0;
            }
        }
        cout << cnt << '\n';
    }
}
