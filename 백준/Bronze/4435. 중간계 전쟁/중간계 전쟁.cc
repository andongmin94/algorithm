#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 0, b = 0;
        for (int i = 0; i < 6; i++)
        {
            int j;
            cin >> j;
            
            if (i == 0) a += j * 1;
            if (i == 1) a += j * 2;
            if (i == 2 || i == 3) a += j * 3;
            if (i == 4) a += j * 4;
            if (i == 5) a += j * 10;
        }
        for (int i = 0; i < 7; i++)
        {
            int j;
            cin >> j;
            
            if (i == 0) b += j * 1;
            if (i == 1 || i == 2 || i == 3) b += j * 2;
            if (i == 4) b += j * 3;
            if (i == 5) b += j * 5;
            if (i == 6) b += j * 10;
        }
        cout << "Battle " << i << ": ";
        if (a > b) cout << "Good triumphs over Evil\n";
        if (a < b) cout << "Evil eradicates all trace of Good\n";
        if (a == b) cout << "No victor on this battle field\n";
    }
}