#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << n << ' ';
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            if (n % i == 0) cnt++;
        cout << cnt;
        cout << '\n';
    }
}
