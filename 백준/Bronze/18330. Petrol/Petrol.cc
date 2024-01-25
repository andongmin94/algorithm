#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a < 60 + b)
        cout << a * 1500;
    else cout << a * 3000 - (b + 60) * 1500;
}