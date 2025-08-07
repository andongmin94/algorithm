#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b[26] = {0,};
    string s;
    cin >> a >> s;
    for (auto e : s)
    {
        b[e - 'a']++;
    }
    pair<char, int> p = {'a', 0};
    for (int i = 0; i < 26; i++)
    {
        if (b[i] > p.second) p = { i + 'a', b[i] };
    }
    cout << p.first << ' ' << p.second;
}
