#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a < 250)
            cout << 4 << " ";
        else if (a < 275)
            cout << 3 << " ";
        else if (a < 300)
            cout << 2 << " ";
        else cout << 1 << " ";
    }
}
