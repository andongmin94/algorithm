#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;

    while (n--)
    {
        string s; cin >> s;
        bool b = true;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'C' && s[i+1] == 'D') b = false;
        }
        if (b) cnt++;
    }
    cout << cnt;
}
