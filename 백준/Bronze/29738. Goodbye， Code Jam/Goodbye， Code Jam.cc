#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int n;
        cin >> n;
        cout << "Case #" << i;
        if (n > 4500) cout << ": Round " << 1 << '\n';
        else if (n > 1000) cout << ": Round " << 2 << '\n';
        else if (n > 25) cout << ": Round " << 3 << '\n';
        else cout << ": World Finals" << '\n';
    }
}