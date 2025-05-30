#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;
    if (!a) cout << c * c - b;
    if (!b) cout << c * c - a;
    if (!c) cout << sqrt(a + b);
}
