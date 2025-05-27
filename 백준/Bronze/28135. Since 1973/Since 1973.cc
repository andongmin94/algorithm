#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cnt++;
        string s = to_string(i);
        
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '5' && s[i + 1] == '0')
            {
                cnt++;
                break;
            }
        }
    }
    string s = to_string(n);
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '5' && s[i + 1] == '0')
        {
            cnt--;
            break;
        }
    }
    cout << cnt;
}
