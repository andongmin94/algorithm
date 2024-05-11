#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;

    while(n--)
    {
        int c;
        cin >> c;
        t -= c;
    }

    if (t <= 0) cout << "Padaeng_i Happy";
    else cout << "Padaeng_i Cry";
}