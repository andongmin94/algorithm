#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;
    int i = a * p;
    int j = p > c ? b + (p - c) * d : b;
    cout << (i < j  ? i : j);
}
