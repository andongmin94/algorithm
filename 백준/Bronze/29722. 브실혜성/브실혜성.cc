#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int y = stoi(s.substr(0, 4));
    int m = stoi(s.substr(5, 2));
    int d = stoi(s.substr(8, 2));
    int n;
    cin >> n;

    long long total_days = (long long)y * 360 + (long long)(m - 1) * 30 + (long long)(d - 1);

    total_days += n;

    y = total_days / 360;
    long long remaining_days = total_days % 360;

    m = remaining_days / 30 + 1;
    d = remaining_days % 30 + 1;

    cout << y << '-';
    if (m < 10) cout << '0' << m << '-';
    else cout << m << '-';

    if (d < 10) cout << '0' << d;
    else cout << d;

    cout << '\n';

    return 0;
}