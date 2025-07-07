#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, a;
    cin >> n >> a;
    cout << (int)round((180 - a) / 2 + a / 2);
}
