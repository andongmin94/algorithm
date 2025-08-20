#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, c; cin >> a >> b;
        if (!a && !b) break;
        
        c = a - b;
        if (c < 2) cout << 0 << ' ' << 0;
        else if (c % 2) cout << (c - 3) / 2 << ' ' << 1;
        else cout << c / 2 << ' ' << 0;
        cout << '\n';
    }
}
