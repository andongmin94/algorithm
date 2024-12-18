#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long long rp = r1 + r2;
    long long d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    if (d < rp) cout << "YES";
    else cout << "NO";
}