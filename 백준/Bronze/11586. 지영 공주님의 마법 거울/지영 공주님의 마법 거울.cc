#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    char arr[100][100] = { 0, };

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[j];
        }
    }

    int m;
    cin >> m;

    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j];
            cout << '\n';
        }
    }
    else if (m == 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
                cout << arr[i][j];
            cout << '\n';
        }
    }
    else if (m == 3)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j];
            cout << '\n';
        }
    }
}
