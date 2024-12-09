#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, k = "";
    cin >> s;

    for (auto e : s)
    {
        if (e == 'E') k += 'I';
        if (e == 'I') k += 'E';

        if (e == 'S') k += 'N';
        if (e == 'N') k += 'S';

        if (e == 'T') k += 'F';
        if (e == 'F') k += 'T';

        if (e == 'J') k += 'P';
        if (e == 'P') k += 'J';
    }
    cout << k;
}