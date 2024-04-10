#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (auto e : s)
    {
        if (e == 'a') cout << 4;
        else if (e == 'e') cout << 3;
        else if (e == 'i') cout << 1;
        else if (e == 'o') cout << 0;
        else if (e == 's') cout << 5;
        else cout << e;
    }
}
