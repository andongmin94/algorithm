#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, k;
    getline(cin, s);
    getline(cin, k);
    int cnt = 0;

    for (int i = 0; i <= s.length() - k.length(); i++)
    {
        if (s.length() < k.length()) break;
        if (s[i] == k[0])
        {
            bool check = true;
            for (int j = 0; j < k.length(); j++)
            {
                if (s[i + j] != k[j])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cnt++;
                i += k.length() - 1;
            }
        }
    }
    cout << cnt;
}
