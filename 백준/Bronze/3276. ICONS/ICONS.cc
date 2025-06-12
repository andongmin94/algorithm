#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i * i == n || i * i > n)
        {
            cout << i << ' ' << i;
            break;
        }
        if (i * (i + 1) == n || i * (i + 1) > n)
        {
            cout << i << ' ' << i + 1;
            break;
        }
    }
}
