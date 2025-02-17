#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    a *= -2;
    b *= -1;

    int cnt = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int j = i;
        if ((a + j) * j == b)
        {
            cnt = j * -1;
            break;
        }
        
        int k = i * -1;
        if ((a + k) * k == b)
        {
            cnt = k * -1;
            break;
        }
        
    }
    if (cnt != a - cnt) cout << min(cnt, a - cnt) << ' ' << max(cnt, a - cnt);
    else cout << cnt;
}
