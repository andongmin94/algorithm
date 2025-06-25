#include <bits/stdc++.h>

using namespace std;

char arr[10][20];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
            arr[i][j] = '.';
    }

    int n; cin >> n;

    while (n--)
    {
        char a;
        int b;
        cin >> a >> b;
        arr[a - 'A'][b - 1] = 'o';
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << arr[i][j];
        }
        cout << '\n';
    }
}
