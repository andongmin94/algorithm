#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    while (n--)
    {
        int a, b, c; cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c << ' ';
        if (a + b + c == 180) cout << "Seems OK\n";
        else cout << "Check\n";
    }
}
