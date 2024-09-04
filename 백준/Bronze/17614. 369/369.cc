#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        string s = to_string(i);
        for (const auto e : s)
        {  
            if (e == '3') cnt++;
            if (e == '6') cnt++;
            if (e == '9') cnt++;
        }
    }

    cout << cnt;
}
