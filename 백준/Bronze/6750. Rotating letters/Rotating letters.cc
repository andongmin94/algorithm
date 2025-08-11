#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char arr[] = { 'I', 'O', 'S', 'H', 'Z', 'X', 'N' };
    string s; cin >> s;
    bool b = false;
    for (auto e : s)
    {
        for (auto i : arr)
        {
            if (e == i)
            {
                b = true;
                break;
            }
            b = false;
        }
        if (!b) break;
    }
    if (b) cout << "YES";
    else cout << "NO";
}
