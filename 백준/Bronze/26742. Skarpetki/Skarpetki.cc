#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int b = 0, c = 0;
    for (auto e : s)
    {
        if (e == 'B') b++;
        else c++;
    }
    cout << b / 2 + c / 2;
}
