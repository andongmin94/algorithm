#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if ((a + b) % 12 != 0)
         cout << (a + b) % 12;
    else cout << 12;
}
