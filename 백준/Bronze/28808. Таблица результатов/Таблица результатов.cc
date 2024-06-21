#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0;

    cin >> n >> m;

    while(n--)
    {
        string s;
        cin >> s;
        for (auto e : s)
        {
            if (e == '+')
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}
