#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s2;
    cin >> s >> s2;

    for (int i = 0; i < s.length(); i++)
    {
        cout << (s[i] > s2[i] ? s[i] : s2[i]); 
    }
}
