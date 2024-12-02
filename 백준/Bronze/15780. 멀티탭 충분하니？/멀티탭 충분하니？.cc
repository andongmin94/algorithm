#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    while(k--)
    {
        int a;
        cin >> a;
        if (a % 2) n -= (a / 2 + 1);
        else n -= a / 2;
    }
    if (n > 0) cout << "NO";
    else cout << "YES";
}
