#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        for (int i = s.size() - 1; i >= 0; i--)
            cout << s[i];
        cout << '\n';
    }
}
