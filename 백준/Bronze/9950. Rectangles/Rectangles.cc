#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (!a && !b && !c) break;
        if (!a) a = c / b;
        if (!b) b = c / a;
        if (!c) c = a * b;
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}
