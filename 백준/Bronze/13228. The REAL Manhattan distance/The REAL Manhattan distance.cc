#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int x1, y1, f1, x2, y2, f2;
        cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;

        int sum = abs(x1 - x2) + abs(y1 - y2) + f1 + f2;
        cout << sum << '\n';
    }
}
