#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;
        m[s]--;
    }
    for (auto e : m)
    {
        if (e.second) cout << e.first;
    }
}
