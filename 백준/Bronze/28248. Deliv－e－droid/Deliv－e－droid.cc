#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, l;
    cin >> g >> l;

    if (g > l) cout << g * 50 - l * 10 + 500;
    else cout << g * 50 - l * 10;
}
