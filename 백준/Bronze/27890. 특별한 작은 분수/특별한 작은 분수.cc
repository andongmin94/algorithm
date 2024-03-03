#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    while(n--)
    {
        if (x % 2 == 0) x /= 2;
        else x *= 2;

        x ^= 6;
    }
    cout << x;
}
