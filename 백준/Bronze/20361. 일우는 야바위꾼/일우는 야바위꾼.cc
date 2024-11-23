#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, k;
    cin >> n >> x >> k;

    while (k--)
    {
        int a, b;
        cin >> a >> b;

        if (x == a) x = b;
        else if (x == b) x = a;
    }
    cout << x;
}
