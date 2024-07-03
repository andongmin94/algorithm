#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i <= 2 * (n-1); i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i + 1; j++)
                cout << '*';
            cout << '\n';
        }
        else
        {
            for (int j = 0; j <= 2 * (n-1) - i; j++)
                cout << '*';
            cout << '\n';
        }
    }
}
