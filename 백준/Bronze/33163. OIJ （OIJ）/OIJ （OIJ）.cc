#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    for (auto& e : s)
    {
        if (e == 'J') cout << 'O';
        if (e == 'O') cout << 'I';
        if (e == 'I') cout << 'J';
    }
}