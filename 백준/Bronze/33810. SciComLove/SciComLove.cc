#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s_ = "SciComLove"; cin >> s;
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != s_[i]) cnt++;
    }
    cout << cnt;
}
