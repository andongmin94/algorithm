#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double k;
    cin >> k;
    long double a = k * 0.01 + 25;

    if (a > 100 && a < 2000)
        cout << a;
    else if (a <= 100)
        cout << 100;
    else cout << 2000;
}
