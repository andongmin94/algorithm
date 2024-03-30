#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--)
    {
        string s;
        int i, j;
        cin >> s >> i >> j;
        for (int k = 0; k < s.size(); k++)
            if (k < i || k > j - 1) cout << s[k];
        cout << '\n';
    }
}