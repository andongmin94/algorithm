#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, p, t;
    cin >> g >> p >> t;

    if (g * p == g + p * t) cout << 0;
    else if (g * p < g + p * t) cout << 1;
    else if (g * p > g + p * t) cout << 2;
}
