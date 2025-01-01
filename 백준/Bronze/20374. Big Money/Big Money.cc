#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    long long a = 0;
    while (cin >> s)
    {
        int len = s.length();
        a += stoll(s.substr(0, len - 3)) * 100 + stoll(s.substr(len - 2, 2));
    }
    long long x = a / 100, y = a % 100;
    cout << x << '.';
    if (y < 10) cout << 0;
    cout << y;
}
