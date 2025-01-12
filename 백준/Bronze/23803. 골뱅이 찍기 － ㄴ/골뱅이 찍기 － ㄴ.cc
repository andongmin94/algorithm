#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    m = 5;

    while (m--)
    {
        if (m)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << '@';
                }
                cout << '\n';
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n * 5; j++)
                {
                    cout << '@';
                }
                cout << '\n';
            }
        }
    }
}
