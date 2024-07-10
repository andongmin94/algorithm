#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5;
    int cnt = 0, max = 0, max_idx;
    while(n--)
    {
        cnt++;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (max < a + b + c + d)
        {
            max = a + b + c + d;
            max_idx = cnt;
        }
    }
    cout << max_idx << ' ' << max;
}
