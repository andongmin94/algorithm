#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y, Z;
    cin >> X >> Y;
    Z = Y - X;

    for (int i = 0; i <= Z; i++)
        if (i % 4 == 0 && i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
            cout << "All positions change in year " << X + i << '\n';

}
