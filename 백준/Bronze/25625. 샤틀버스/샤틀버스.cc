#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (y >= x)
        cout << y - x << '\n';
    else cout << x + y << '\n';        
}
