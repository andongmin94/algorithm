#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {
        int cnt = 0;
        for (int i = 1; i <= 10; i++)
        {
            int n;
            cin >> n;
            if ((i - 1) % 5 + 1 == n) cnt++;
        }
        if (cnt == 10) cout << k << '\n';
    }
}
 