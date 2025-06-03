#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, c, ans; cin >> a >> b >> c;
        if (!a && !b && !c) break;
        ans = c - a + b;
        if (ans % b || (b && a > c)) cout << "X\n";
        else cout << ans / b << '\n';
    }
}
