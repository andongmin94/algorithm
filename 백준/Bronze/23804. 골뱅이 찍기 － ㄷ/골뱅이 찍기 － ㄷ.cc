#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 5 * t; j++)
        {
            cout << '@';
        }
        cout << '\n';
    }

    for (int i = 0; i < 3 * t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            cout << '@';
        }
        cout << '\n';
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 5 * t; j++)
        {
            cout << '@';
        }
        cout << '\n';
    }
}
