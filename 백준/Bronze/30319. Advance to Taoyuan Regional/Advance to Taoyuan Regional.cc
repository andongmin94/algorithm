#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char i, j;
    cin >> a >> i >> b >> j >> c;

    if (b == 9)
    {
        if (c <= 16) cout << "GOOD";
        else cout << "TOO LATE";
    }
    else if (b < 9) cout << "GOOD";
    else cout << "TOO LATE";
}
