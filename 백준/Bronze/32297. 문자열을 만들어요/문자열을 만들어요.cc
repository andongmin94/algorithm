#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; string s; cin >> n >> s;
    bool b = false;
    for (int i = 0; i < n - 3; i++)
    {
        if (s[i] == 'g' && s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i') b = true;
    }
    if (b) cout << "YES";
    else cout << "NO";
}
