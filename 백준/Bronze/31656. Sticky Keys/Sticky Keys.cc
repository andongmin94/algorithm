#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (i != 0 && s[i] == s[i-1]) continue;
        cout << s[i];
    }
}
