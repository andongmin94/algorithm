#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    while (n--)
    {
        int a; cin >> a;
        cnt += a / 2;
        cnt += a % 2;
    }
    cout << cnt;
}
