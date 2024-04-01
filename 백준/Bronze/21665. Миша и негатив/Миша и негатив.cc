#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, cnt = 0;
    cin >> x >> y;

    char arr[100][100];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> arr[i][j];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            char k;
            cin >> k;

            if (k == arr[i][j]) cnt++;
        }
    }

    cout << cnt;
}