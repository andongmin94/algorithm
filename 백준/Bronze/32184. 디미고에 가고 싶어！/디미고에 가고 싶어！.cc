#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 0; cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        cnt++;
    }
    if (cnt % 2 == 0)
    {
        cnt /= 2;
        if (a % 2 == 0) cnt++;
    }
    else
    {
        cnt /= 2;
        cnt++;
    }
    cout << cnt;
}
