#include <regex>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 0; i < s.length(); i++)
        if (s[i] == '0') cnt++;

    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s[i] == '0') cnt--;
        else break;
    }

    cout << cnt;
}