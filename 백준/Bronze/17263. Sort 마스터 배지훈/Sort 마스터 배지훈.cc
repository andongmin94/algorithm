#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k = 0, m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        k = max(m, k);
    }
    cout << k;
}
