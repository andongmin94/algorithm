#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while(a--)
    {
        string s;
        cin >> s;
        
        int o = 0;
        int x = 0;

        for (auto e : s)
        {
            if (e == 'O') o++;
            else x++;
        }
        
        if (o > x) cnt++;
    }
    cout << cnt;
}