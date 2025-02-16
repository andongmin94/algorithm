#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    cin >> t >> s;

    string s2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (i % t == 0) s2 += s[i];
    }
    cout << s2;
}
