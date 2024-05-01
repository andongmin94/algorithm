#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int idx = 0;
    char c;

    while(idx < s.length())
    {
        c = s[idx];
        cout << c;
        idx += c - 'A' + 1;
    }
}
