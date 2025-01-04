#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    bool b = false;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'd' && s[i+1] == '2')
            b = true;
        if (s[i] == 'D' && s[i+1] == '2')
            b = true;
    }
    if (b) cout << "D2";
    else cout << "unrated";
}
