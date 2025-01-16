#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2) res += 3;
        else res -= 2;
    }
    cout << res;
}
