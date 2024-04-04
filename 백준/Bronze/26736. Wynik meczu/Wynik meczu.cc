#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int a = 0, b = 0;

    for (auto e : s)
    {
        if (e == 'A') a++;
        else b++;
    }

    cout << a << " : " << b;
}
