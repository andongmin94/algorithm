#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 4, cnt = 0, max = 0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        cnt += b;
        cnt -= a;
        if (max < cnt) max = cnt;
    }
    cout << max;
}
