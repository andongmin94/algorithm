#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double x, y;
        cin >> x >> y;
        if (x == 0 || y == 0)
            cout << "AXIS" << '\n';
        else if (x > 0 && y > 0)
            cout << "Q1" << '\n';
        else if (x < 0 && y > 0)
            cout << "Q2" << '\n';
        else if (x < 0 && y < 0)
            cout << "Q3" << '\n';
        else if (x > 0 && y < 0)
            cout << "Q4" << '\n';

        if (x == 0 && y == 0)
            break;
    }
}
