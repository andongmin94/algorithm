#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    bool b = true;
    cin >> n >> s;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == s[i]) b = false;
    }
    if (b) cout << "Yes";
    else cout << "No";
}
