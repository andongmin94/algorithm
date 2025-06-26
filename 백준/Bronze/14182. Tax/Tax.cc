#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n; cin >> n;
        if (!n) return 0;
        
        if (n > 5000000) cout << (int)(n * 0.8) << '\n';
        else if (n > 1000000) cout << (int)(n * 0.9) << '\n';
        else cout << n << '\n';
    }
}
