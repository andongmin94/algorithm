#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        string s; cin >> s;

        int cnt = 0;
        if (s.length() >= 3)
        {
            for (int i = 0; i < s.length() - 2; i++)
            {
                if (s[i] == 'W' && s[i+1] == 'O' && s[i+2] == 'W')
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
