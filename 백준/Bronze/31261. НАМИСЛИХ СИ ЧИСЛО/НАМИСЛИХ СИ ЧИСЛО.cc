#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    b += a;
    b *= a;
    b += a;
    b *= a;
    cout << b;
}