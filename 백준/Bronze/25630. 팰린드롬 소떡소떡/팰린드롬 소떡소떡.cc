#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;

    int n_ = n / 2;
    for (int i = 0; i < n_; i++)
    {
        if (s[i] != s[n - 1 - i]) cnt++;
    }
    cout << cnt;
}

