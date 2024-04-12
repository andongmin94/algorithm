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
        if (e == 'e') cout << "ee";
        else cout << e;
    }
}
