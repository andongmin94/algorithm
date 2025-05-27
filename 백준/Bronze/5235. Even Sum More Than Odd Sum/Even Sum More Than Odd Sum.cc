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
        long long odd = 0, even = 0;
        while (n--)
        {
            int m; cin >> m;
            if (m % 2) odd += m;
            else even += m;
        }
        if (odd > even) cout << "ODD";
        else if (odd < even) cout << "EVEN";
        else cout << "TIE";
        cout << '\n';
    }
}
