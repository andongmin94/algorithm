#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b = 0, s = 0, a = 0;
    int n;
    string str;
    cin >> n >> str;
    for (auto e : str)
    {
        if (e == 'B') b++;
        if (e == 'S') s++;
        if (e == 'A') a++;
    }
    int m = max(b, max(s, a));
    if (b == s && s == a)
    {
        cout << "SCU";
        return 0;
    }
    if (m == b) cout << "B";
    if (m == s) cout << "S";
    if (m == a) cout << "A";
}
