#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m, cnt = 0;
        cin >> n >> m;

        for (int i = 1; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                double k = (pow(i, 2) + pow(j, 2) + m) / (i * j);
                if (k == static_cast<int>(k)) cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
