#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int m = 0;
    if (n > 5)
    {
        m = n - 5;
        n -= m;
    }
    if (n == m)
    {
        cout << 1;
        return 0;
    }
    int cnt = 1;
    while (n > m)
    {
        n--;
        m++;
        if (n < m) break;
        cnt++;
    }
    cout << cnt;
}
