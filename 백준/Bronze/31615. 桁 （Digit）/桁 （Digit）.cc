#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 0;
    cin >> a >> b;
    int c = a + b;

    while (c > 0)
    {
        c /= 10;
        cnt++;
    }
    cout << cnt;
}