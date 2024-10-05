#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k = 0;
    cin >> n >> m;

    while(n--)
    {
        int a;
        cin >> a;
        m -= a;
        if (m >= 0) k++;
    }
    cout << k;
}
