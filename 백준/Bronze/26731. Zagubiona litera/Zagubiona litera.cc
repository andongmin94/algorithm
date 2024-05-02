#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int al[26] = {0,};

    for (auto e : s)
    {
        al[e - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!al[i]) cout << static_cast<char>(i + 'A');
    }
}
