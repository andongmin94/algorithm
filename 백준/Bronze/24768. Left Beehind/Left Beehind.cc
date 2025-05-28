#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (!x && !y) break;

        if (x + y == 13) cout << "Never speak again";
        else if (x > y) cout << "To the convention";
        else if (x == y) cout << "Undecided";
        else if (x < y) cout << "Left beehind";
        
        cout << ".\n";
    }
}
