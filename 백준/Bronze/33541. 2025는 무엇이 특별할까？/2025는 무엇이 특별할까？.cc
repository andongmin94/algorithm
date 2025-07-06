#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;

    while (x < 10000)
    {
        x++;
        int a = x / 100;
        int b = x % 100;

        if (pow((a + b), 2) == x && x != 10000)
        {
            cout << x;
            break;
        }
    }
    if (x == 10000) cout << -1;
}
