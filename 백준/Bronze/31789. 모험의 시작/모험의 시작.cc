#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, s;
    cin >> n >> x >> s;
    bool yes = false;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a <= x && b > s)
        {
            yes = true;
            break;
        }
    }
    if (yes) cout << "YES";
    else cout << "NO";
}
