#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    if (n == 1)
    {
        cout << 0;
        return 0;
    }

    if (n % 2) cout << 4;
    for (int i = 0; i < n / 2; i++)
    {
        cout << 8;
    }
}
