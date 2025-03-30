#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == 'C') cnt++;
    }
    cout << cnt;
}
