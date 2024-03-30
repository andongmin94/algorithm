#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;

    while(n--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (i != s.size() - 1 && s[i] == '0' && s[i+1] == '1')
            {
                cnt++;
                break;
            }
            else if (i != s.size() - 1 && s[i] == 'O' && s[i+1] == 'I')
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
}