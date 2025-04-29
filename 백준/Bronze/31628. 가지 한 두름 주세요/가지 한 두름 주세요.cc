#include <bits/stdc++.h>

using namespace std;

string arr[10][10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cin >> arr[i][j];
    }

    bool b = false;

    for (int i = 0; i < 10; i++)
    {
        bool c = true;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][0] != arr[i][j]) c = false;
        }
        if (c) b = true;
        if (b) break;

        c = true;
        for (int j = 0; j < 10; j++)
        {
            if (arr[0][i] != arr[j][i]) c = false;
        }
        if (c) b = true;
        if (b) break;
    }
    if (b) cout << 1;
    else cout << 0;
}
