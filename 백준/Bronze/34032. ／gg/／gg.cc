#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (auto e : s)
        if (e == 'O') cnt++;
    if (cnt >= n / 2) cout << "Yes";
    else cout << "No";
}
