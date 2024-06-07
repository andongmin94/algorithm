#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt;
    string s;
    cin >> cnt >> s;
    cnt = 0;

    for (auto e : s)
    {
        if (e == 'j' || e == 'i') cnt += 2;
        else cnt++;
    }

    cout << cnt;
        
}