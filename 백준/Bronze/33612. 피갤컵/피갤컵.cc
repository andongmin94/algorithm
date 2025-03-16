#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int y = 2024, m = 0;
    m += n * 7;
    y += m / 12;
    m %= 12;
    cout << y << ' ' << m + 1;
}
