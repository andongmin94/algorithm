#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int cnt = 1;
    for (int i = 1; i < s.length(); i++)
        if (s[i] != s[i - 1]) break;
        else cnt++;
    cout << cnt;
}
