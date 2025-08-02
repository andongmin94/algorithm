#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    while (n--)
    {
        int a, b, c; cin >> a >> b >> c;
        if (a != -1)
        {
            if (b != -1)
            {
                if (a <= b && (c == -1 || b <= c)) cnt++;
            }
            else
            {
                if (c == -1) cnt++;
            }
        }
    }
    cout << cnt;
}
