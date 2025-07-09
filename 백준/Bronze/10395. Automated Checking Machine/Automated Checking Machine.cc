#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s2;
    
    getline(cin, s);
    getline(cin, s2);

    bool b = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (s2[i] == '1')
            {
                b = false;
                break;
            }
        }
        if (s[i] == '0')
        {
            if (s2[i] == '0')
            {
                b = false;
                break;
            }
        }
    }
    if (b) cout << 'Y';
    else cout << 'N';
}
