#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int cnt = 0;

    int n;
    cin >> n;

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = 1; j <= n - 2; j++)
        {
            for (int k = 1; k <= n - 2; k++)
            {
                if (i + j + k != n) continue;
                if (!(j + 2 <= k)) continue;
                if (i % 2) continue;
                cnt++;
            }
        }
    }
    cout << cnt;
}