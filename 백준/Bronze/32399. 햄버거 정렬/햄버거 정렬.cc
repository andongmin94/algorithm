#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    int cnt = 0;

    if (s[0] == '(')
    {
        if (s[1] == '1') cnt = 0;
        else cnt = 1;
    }
    else if (s[0] == '1')
    {
        if (s[1] == '(') cnt = 1;
        else cnt = 1;
    }
    else if (s[0] == ')')
    {
        if (s[1] == '(') cnt = 1;
        else cnt = 2;
    }
    cout << cnt;
}
