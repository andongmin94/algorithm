#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e;
    int cnt = 0;

    cin >> a >> b >> c >> d >> e;

    if (a - b <= 1000) cnt++;
    if (a - c <= 1000) cnt++;
    if (a - d <= 1000) cnt++;
    if (a - e <= 1000) cnt++;

    cout << cnt;
}