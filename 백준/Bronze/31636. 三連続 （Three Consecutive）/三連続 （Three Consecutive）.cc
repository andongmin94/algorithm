#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    string s;
    cin >> cnt >> s;
    cnt = 0;
    bool k = false;

    for (auto e: s)
    {
        if (e == 'o') cnt++;
        else cnt = 0;

        if (cnt == 3) k = !k;
    }

    if (k) cout << "Yes";
    else cout << "No";
}