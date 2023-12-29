#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    if (l == r && l != 0)
        cout << "Even " << l + r << '\n';
    else if (l != r)
        cout << "Odd " << (l > r ? l * 2 : r * 2) << '\n';
    else cout << "Not a moose";
}
