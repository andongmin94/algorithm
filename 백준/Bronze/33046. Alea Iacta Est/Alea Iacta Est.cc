#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d - 1;

    int cnt = 0;
    while (sum--)
    {
        cnt++;
        if (cnt == 5) cnt = 1;
    }
    cout << cnt;
}
