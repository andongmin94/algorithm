#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int B;
    cin >> B;

    cout << 5 * B - 400 << '\n';
    if (B > 100) cout << -1;
    if (B == 100) cout << 0;
    if (B < 100) cout << 1;
}
