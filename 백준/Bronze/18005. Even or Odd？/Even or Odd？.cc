#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    if (n % 2)
    {
        cout << 0;
        return 0;
    }
    else
    {
        if ((n + 1) % 2 == 1 && (n / 2) % 2 == 1)
        {
            cout << 1;
            return 0;
        }
        else
        {
            cout << 2;
            return 0;
        }
    }
}
