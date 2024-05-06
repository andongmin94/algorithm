#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin >> m >> n;

    if (m == 1 || n == 1)
    {
        cout << (m > n ? m : n);
    }
    else cout << m * 2 + (n - 2) * 2;
}
