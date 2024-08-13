#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    while (b != c)
    {
        cnt++;
        b++;
        if (a < b) b = 1;
    }
    cout << cnt;
}
