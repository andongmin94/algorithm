#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool l = false, k = false, p = false;

    for(int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;

        if (s[0] == 'l') l = true;
        if (s[0] == 'k') k = true;
        if (s[0] == 'p') p = true;
    }

    if (l && k && p) cout << "GLOBAL";
    else cout << "PONIX";
}